const myArr = [1,2,4,6,7,8,]
const myName = ["hero","shayam","Hari"]
const newArr = new Array(1,4,5,7)
console.log("myArray: ",myArr);  // Output: myArray:  1
console.log(newArr[0]);
myArr.push(9)
console.log(myArr);
myArr.pop()
console.log(myArr.includes(7))


const marvelhero = ["thor","Ironman","spiderman"]
const  supervillian =["Loki","Vulture","Redskull"]
// marvelhero.push(supervillian)
// console.log(marvelhero);
// console.log(marvelhero[3]);
// console.log(marvelhero[3][2]);
 const allHero = marvelhero.concat(supervillian)
 console.log(allHero);

 const all_new_heros = [...marvelhero,...supervillian]
 console.log(all_new_heros);
 const anotherArray = [1,2,3,[6,3,2,6],4,5,[4,6,[4,56,]]]
 const anotherOptArray = anotherArray.flat(Infinity)
 console.log(anotherOptArray);
 console.log(Array.isArray("paras"));
 console.log(Array.from("paras"));
 console.log(Array.from({name:"paras"}))

 let score1 =100;
 let score2 = 200;
 let score3 = 300;
 console.log(
    Array.of(score1,score2,score3)

 );
 // hello.ts
console.log("Hello, Deno!");


