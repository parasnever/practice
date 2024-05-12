//singlton
Object.create


//object literal
const mySym = Symbol("mysymbol")

const jsUser = {
  name: "paras",
  "full name":"paras Shrestha",
  [mySym]: "key",

  age: 25,
  profession: "Software Developer",
  country: "Nepal",
  hobbies: ["Reading", "Writing"],
  email: "paras@gmail.com",
  isLogedIn: false,
  lastLoginDayas:["sunday","tuesday"]
};
// console.log(jsUser.email);
// console.log(jsUser["email"]);
// console.log(jsUser["full name"]);
// console.log(typeof jsUser[mySym]);


jsUser.email ="paras@GMAISNLCOF"
// console.log(jsUser.email);
// Object.freeze(jsUser)
jsUser.email = "nevereorijg"
// console.log(jsUser);
  
jsUser.greeting = function (){
    console.log("hello js world");
}
jsUser.greetingTwo = function () {
  console.log(`hello js world ${this.name}`);
};
console.log(jsUser.greeting());
console.log(jsUser.greetingTwo());
