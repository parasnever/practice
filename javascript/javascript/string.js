let name = "paras";
let repoCout = 6;
console.log(`My name is ${name.toUpperCase()} shrestha and my repo 
count is ${repoCout}`);
const nameAnother = new String("Shrestha");
console.log(nameAnother[0]);
console.log(nameAnother.toUpperCase());
console.log(nameAnother.charAt(3));//charAt is  used to get the character at a specific index in string
console.log(nameAnother.indexOf("t"));//indexOf is  used to find the position of a character in string
                                //if it does not exist then it returns -1
const alsoName = nameAnother.substring(0,4);
//substing is converts  the string from start index to end index -1
const restOfName =nameAnother.slice(4,7)
//slice is converts is  a method of array which returns a subarray of an object of the array 
console.log("restOfName : "+restOfName);
console.log("alsoName: "+alsoName);

console.log(nameAnother.__proto__);
console.log(name[1]);
//String methods can be accessed using dot notation or bracket notation
/*
- charCodeAt() returns the Unicode of a character at given index in string.
*/
const newStringOne = "    Paras     ";
console.log(newStringOne);
console.log(newStringOne.trim());
//trim avoid the white space
const url = "https://paras%20shrestha";
console.log(url.replace('%20','-'))

// replace method replaces %20 with - sign
console.log(url.includes(url));
const email = "paras@gmai@com"
console.log(email.split('@'))