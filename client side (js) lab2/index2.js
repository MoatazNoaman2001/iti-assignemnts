//Exerise 1
// var student = {
//     name:"moataz",
//     age:20,
//     grade: "A"
// }

// student.subject="DS";

// student['grade'] = "A+";
// delete student.age;

// let isAgeDefined = "age" in student;

// console.log(student);
// console.log(`is Age defined: ${isAgeDefined}`);

//Exercise 2
// function analyzeString (str){
//     return {
//         length: str.length,
//         firstChar: str[0],
//         lastChar: str[1],
//         wordCount: str.split(" ").length
//     }
// }
// analyzeString("Hello mr moataz");

//Exercise 3
// function tth(str){
//     console.log(str.indexOf("ITI"));
//     console.log(str.lastIndexOf("ITI"));
//     console.log(str.replace("ITI", "Facebook"));
// }
//Excerise 4
// var username = prompt("Enter your name: ");
// var wantToPrecced = confirm("Wants to precces");

// if (wantToPrecced){
//     console.log(`Welcome ${username}`);
// }else {
//     console.log("Operation canceled");
// }

//Execrise 5
function reformArr(arr){
    console.log(arr[0]);
    console.log(arr[arr.length -1]);
    arr.splice(1 , 1);
    arr[2] = 100;
}
//Execrise 6
function concateFuns(){
    const numbers1 = [1, 2, 3, 4, 5];
    const numbers2 = [6, 7, 8, 9, 10];
    const names = ["moataz", "mahmoud", "alaa", "whatever"];

    const mergedArray = numbers1.concat(numbers2, names);
    console.log('concated array:', mergedArray);

    const middleIndex = Math.floor(mergedArray.length / 2);
    const middleSlice = mergedArray.slice(middleIndex - 1, middleIndex + 2);
    console.log('middle element:', middleSlice);
}
//Execrise 7
var arrNums = [1,2,3,4,5,6];
console.log(arrNums.map(num=>num*2));
console.log(arrNums.filter(num=>num <= 6));

//Execrise 8
function evalFermula(str){
    let result = eval(expression);
    if (isFinite(result) && !isNaN(result)) {
        console.log(`Result: ${result}`);
    } else {
        console.log("Invalid result");
    }
}

//Execrise 9 ->>

//Exercise 10

function analyzePhragraph(str){
    const totalChars = str.replace(/\s/g, '').length;
    const totalWords = str.split(/s+/).filter(w=>w).length;
    const totalSentance = str.split('.').filter(s=>s.trim()).length;
    const modifiedParghraphe = str.replace(/ITI/g, 'Google');

    return {
        t_c:totalChars,
        t_w:totalWords,
        t_s:totalSentance,
        m_p:modifiedParghraphe,
    }
}

//Exercise 11
var arr = [2,3,4,5,7,11,13, 17, 19]
console.log(arr.map(n=>n*2).filter(n=>n>20).sort());

//Exercise 12

const person = {
    firstName:"Ahmed",
    lastName:"moahamed",
    age:30,
    Gender:"Male"
}
person['hoppies'] = 'football'

//execrise 13 ->>

//Exercise 14 
var arr1 = [1, 2, 3, 4]
var arr2 = [5, 6, 7, 8]

var arr3 = arr1.concat(arr2);
arr3.unique();
arr3.sort();
arr3.sum();
