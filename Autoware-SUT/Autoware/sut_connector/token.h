#pragma once

#include <ctime>
#include <string>


class Token {
  public:
    Token();

    bool IsValid() const;
    bool Request(const std::string &username, const std::string &password);

    std::string GetAccessToken() const;
    time_t GetExpirationTime() const;

  private:
    static const std::string CLIENT_ID;
    static const std::string GRANT_TYPE;
    static const std::string AUDIENCE;

    static size_t WriteFunction(void *ptr, size_t size, size_t nmemb, void *data);

    std::string _accessToken;
    time_t _expirationTime;
};
