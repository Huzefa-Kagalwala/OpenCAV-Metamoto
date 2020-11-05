#include <iostream>
#include <sstream>
#include "curl/curl.h"
#include "nlohmann/json.hpp"
#include "token.h"

using namespace std;

const string Token::CLIENT_ID = "2x8fbMyhPHJyXXhQC01IXnkgkoNgrv2Q";
const string Token::GRANT_TYPE = "password";
const string Token::AUDIENCE = "https://metamoto.com/api";

Token::Token()
  : _expirationTime(0)
{
}

bool Token::IsValid() const {
  return (!_accessToken.empty() && (time(NULL) < _expirationTime));
}

std::string Token::GetAccessToken() const {
  return _accessToken;
}

time_t Token::GetExpirationTime() const {
  return _expirationTime;
}

bool Token::Request(const string &username, const string &password) {

  nlohmann::json root;
  root["grant_type"] = GRANT_TYPE;
  root["client_id"] = CLIENT_ID;
  root["audience"] = AUDIENCE;
  root["username"] = username;
  root["password"] = password;

  curl_global_init(CURL_GLOBAL_ALL);

  CURL *curl = curl_easy_init();
  if (!curl) {
    return false;
  }

  curl_easy_setopt(curl, CURLOPT_URL, "https://metamoto.auth0.com/oauth/token");

  struct curl_slist *list = NULL;
  list = curl_slist_append(list, "Content-Type: application/json");
  curl_easy_setopt(curl, CURLOPT_HTTPHEADER, list);

  string body = root.dump();
  curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, body.length());
  curl_easy_setopt(curl, CURLOPT_COPYPOSTFIELDS, body.c_str());

  string data;
  curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &Token::WriteFunction);
  curl_easy_setopt(curl, CURLOPT_WRITEDATA, &data);

  CURLcode res = curl_easy_perform(curl);
  if (res != CURLE_OK) {
    cout << "Authentication POST failed: " << curl_easy_strerror(res) << endl;
    curl_easy_cleanup(curl);
    return false;
  }

  curl_easy_cleanup(curl);

  root = nlohmann::json::parse(data);
  if ((root.find("access_token") == root.end()) ||
      (root.find("expires_in") == root.end())) {
    return false;   
  }

  _accessToken = root.find("access_token").value().get<string>();
  _expirationTime = time(NULL) + root.find("expires_in").value().get<int>();

  return true;
}

size_t Token::WriteFunction(void *ptr, size_t size, size_t nmemb, void *data) {
  size_t length = nmemb * size;

  if (length > 0) {
    *((string *)data) += string((char *)ptr, length);
  }

  return length;
}
