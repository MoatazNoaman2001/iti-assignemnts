//exc 1

// document.write("Hello 3")
// console.log("helllo here")
// var numberOne = 10, numberTwo = 20;
// console.log("Sum is " + numberOne + numberTwo);

// //excrise 2
// var x = "Global X";

// function simpleFun() {
//     var x = "Local X";
//     console.log("Inside function x:", x);
// }

// simpleFun();
// console.log("Outside function x:", x);

// console.log("before define y: ", y);
// var y = 10;
// console.log("after after y:", y);


//excise 3

// let age = prompt("enter your age:");

// if (isNaN(age) || age.trim() === "") {
//     console.log("Invalid age");
// } else {
//     age = parseInt(age);
//     if (age < 12) {
//         console.log("Child");
//     } else if (age >= 13 && age <= 19) {
//         console.log("Teenager");
//     } else if (age >= 20) {
//         console.log("Adult");
//     } else {
//         console.log("Invalid age");
//     }
// }

//excrise 4

// function threeSum(str, num){
//     var result = str+ num;
//     console.log("result: " , result);
//     console.log("res type: " , result);

//     console.log("is String " , typeof result === "string");

//     console.log("5" + 3 + 5);
//     console.log(5 + 3 + "5");
// }

//exrise 5:

// var grade  = prompt("enter your grade presentage: ");
// if (isNaN(gradeInput) || gradeInput.trim() === "" || gradeInput < 0 || gradeInput > 100) {
//     console.log("invalid input");
//     return;
// }
// grade = Math.floor(Number(gradeInput));

// switch (true) {
//     case grade >= 90 && grade <= 100:
//         console.log("A");
//         break;
//     case grade >= 80 && grade <= 89:
//         console.log("B");
//         break;
//     case grade >= 70 && grade <= 79:
//         console.log("C");
//         break;
//     case grade >= 60 && grade <= 69:
//         console.log("D");
//         break;
//     case grade < 60:
//         console.log("F");
//         break;
//     default:
//         console.log("Invalid grade");
// }

// //excrise 6
// for (let i = 0; i <= 100; i++) {
//     if (i === 50) {
//         console.log("Limit reached!");
//         break;
//     }
// }

//exrcise 7

function calculateFactorial(n){
    var fact = 1;
    for (let i = n; i >1; i--){
        fact*= i;
    }

    console.log("fact of " + n  + " is: " + fact);
}

//execrise 8

// function add(...args) {
//     if (args.length === 0) {
//         return 0;
//     } else if (args.length === 2) {
//         return args[0] + args[1];
//     } else if (args.length === 3) {
//         return args[0] + args[1] + args[2];
//     }
// }

// console.log(add());
// console.log(add(5, 10));
// console.log(add(1, 2, 3));
// console.log(add(7));

//exercise 9

function personFunction(){
    const person = {
        name: "Moataz",
        age: 23,
        hoppy: "killing peaples",

        describtion(){
            console.log(`my name is ${this.name}, I am ${this.age}, and I enjoy ${this.hoppy }`)
        }
    }
    
    person.describtion();
}

//exercise 10

function greetUser(name){
    console.log("Hello, [${name}]!");   
}

//exercise 11
function getTotal(price, tax) {return price + price * tax;}
function isEven(n) { return e%2 == 2;}
function getMax(n1, n2) { return n1 > n2? n1 : n2;}
function getProds(n, x) {return n*x;}
console.log(getProds(8 , 5))

console.log(isEven(7)  ? "Even number" : "Odd number")