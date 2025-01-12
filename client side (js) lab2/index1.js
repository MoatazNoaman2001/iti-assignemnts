
//Execrise 1
// function reverseWords(str){
//     var arr = str.split(" ");
//     var revArr = [];

//     for( let i = arr.length - 1; i >= 0; i-- ) {
//         revArr.push(arr[i]);
//     }
//     console.log(revArr.join(" "));
// }

// reverseWords("hola mr");


//Exerise 2
// function getSum(arr , sum){
//     if (!arr || arr.length == 0)
//         return sum;
//     sum += arr.pop();
//     return getSum(arr , sum);
// }


// console.log(getSum([7,4,1,2,3,5] , 0));

//Exerise 3
// function simpleCalc(){
//     var f = Number(prompt("Enter first number: "));
//     var s = Number(prompt("Enter second number: "));
//     var o = prompt("Enter operator: ");

//     if (o==='/'){
//         return f/s;
//     }else if (o==='*') return f*s;
//     else if (o==='+') return f+s;
//     else if (o==='-') return f-s;
//     else {
//         console.log("undifined operator");
//         return 0;
//     }
// }

// simpleCalc();

//Exerise 4
// function isPlandrom(str){
//     var i = 0;
//     var j=str.length-1;
//     while(i < j){
//         if (str[i] !== str[j])
//             return false;
//         i++;
//         j--;
//     }
//     return true;
// }

// isPlandrom("A man a plan a canal Panama"); // false

//Exercise 5
// function fizzBuzz(){
//     for (var i=0;i<100;i++){
//         if (i%3 ===0){
//             console.log("Fizz");
//         }else if (i%5 === 0){
//             console.log("Buzz");
//         } else{
//             console.log(i);
//         }
//     }
// }
// fizzBuzz();

//Exercise 6
// function bubbleSor(arr){
//     var isSorted = false;
//     var size = arr.length;

//     do{
//         isSorted = true;
//         for (var i = 1; i < size; i++){
//             if (arr[i] < arr[i -1]){
//                 var temp = arr[i];
//                 arr[i] = arr[i -1];
//                 arr[i -1] = temp;
//                 isSorted = false;
//             }
//         }
//         size--;
//     }while(isSorted == false);
//     return arr;
// }

// console.log(bubbleSor([7,4,1,2,3,5,8,9,6]));