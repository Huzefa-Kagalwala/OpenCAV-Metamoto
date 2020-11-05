const Fs = require('fs-extra');
const Argv = require('minimist')(process.argv.slice(2));
const Axios = require('axios');

import { metamoto, google } from './protos';
import { Scenario, EgoVehicle } from './common';
import { TestVector } from './test-vector';

const VPC = Argv._[0];
const TOKEN = Argv._[1];
let SCENARIO = Argv._[2];
let VEHICLE = Argv._[3];


// need to have npm and ts-node (npm install -g ts-node), then:
// $ npm install
// $ ts-node create_vector_example.ts <vpc> <token> <scenario-file-or-json> <vehicle-file-or-json>
(async function run() {
  let headers = { headers: { Authorization: 'Bearer ' + TOKEN } };

  if (!SCENARIO.startsWith('{')) {
    SCENARIO = Fs.readFileSync(SCENARIO).toString();
  }
  SCENARIO = JSON.parse(SCENARIO);

  if (!VEHICLE.startsWith('{')) {
    VEHICLE = Fs.readFileSync(VEHICLE).toString();
  }
  VEHICLE = JSON.parse(VEHICLE);

  let vector = new TestVector();
  vector.name = 'Example Vector';
  vector.strategy = TestVector.Strategy.EXHAUSTIVE;

  vector.setScenario(Scenario.fromObject(SCENARIO));
  vector.setEgoVehicle(EgoVehicle.fromObject(VEHICLE));
  vector.setAllFixed(true);

  let paramRange = {
    parameterName: "Rain",
    numericRanges: [ { "min": 0, "max": 1, "step": 1 } ] 
  };
  vector.parameters['scenario/environment/weather/rain'] = { selected: paramRange, range: paramRange };

  console.log((await Axios.post('https://' + VPC + '.metamoto.com/api/vectors', vector, headers)).data.id);
})();

