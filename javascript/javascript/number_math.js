let score = 190;
console.log(score);
let anotherScore = new Number(2000)
console.log(anotherScore);
console.log(anotherScore.toString().length);
console.log(anotherScore.toFixed(3));
 const otherNumber = 2345.7433
 console.log(otherNumber.toPrecision(4));

const hundreds = 10000000;
console.log(hundreds.toLocaleString('en-NP'));

//++++++++++++++++++++++Math+++++++++++++++
// console.log(Math);
// console.log(Math.abs(-56))
// console.log(Math.round(5.2))
// console.log(Math.ceil(5.2))
// console.log(Math.floor(5.2))
// console.log(Math.min(5.2,3,5,9,65,3,))
// console.log(Math.max(5.2,3,5,9,65,3,))
console.log((Math.random()*10) + 1);
console.log(Math.floor(Math.random()*10) + 1);
const min = 10
const max = 20
console.log(Math.floor(Math.random() *(max -min + 1)) + min);