let myDate = new Date()
console.log(myDate);
console.log(myDate.toString());
console.log(myDate.toISOString());
console.log(myDate.toLocaleTimeString());
console.log(typeof myDate);
let myCreatedDate = new Date(2024,1,27)
console.log(myCreatedDate.toDateString());
let myTimeStamp = Date.now()
console.log(myTimeStamp);
console.log(myCreatedDate.getTime());
console.log(Math.floor(Date.now()/1000));
const checkDate =myCreatedDate.toLocaleString('default',{
    weekday:"long",
})
console.log(checkDate);
function addSum(a ,b){
    return  a+b;

}
addSum(4,6)