const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().split(' ');
console.log(parseInt(input[0], 10)-parseInt(input[1], 10));
