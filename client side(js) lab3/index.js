const jsTips = [
    "Always declare variables using let or const.",
    "Understand the difference between == and ===.",
    "Use template literals for cleaner string concatenation.",
    "Use array methods like map, filter, and reduce for better code.",
    "Avoid using global variables whenever possible.",
    "Learn and use async/await for asynchronous operations.",
    "Debug using console.log or the browser's Developer Tools.",
    "Use strict mode to write safer JavaScript code.",
    "Understand closures and their importance in JavaScript.",
    "Regularly check for updates and best practices in JavaScript."
];
function showRandomTip() {
    const randomIndex = Math.floor(Math.random() * jsTips.length);
    document.getElementById('tipContainer').textContent = jsTips[randomIndex];
}
try{
    showRandomTip();
}catch(e){
    console.log(`error: ${e}`)
}finally {
    console.log("loaded fine")
}

document.getElementById("dateBtn").onclick = function(){
    document.getElementById("currentDate").textContent = Date();
}

function validateDateFormat(userDate) {
    if (userDate.length === 10 && userDate.charAt(2) === '-' && userDate.charAt(5) === '-') {
        let day = parseInt(userDate.substring(0, 2));
        let month = parseInt(userDate.substring(3, 5)) - 1;
        let year = parseInt(userDate.substring(6, 10)); 

        let date = new Date(year, month, day);

        if (date.getDate() === day && date.getMonth() === month && date.getFullYear() === year) {
            alert("The date you entered is: " + date.toDateString());
            document.getElementById("enteredDate").textContent = date.toDateString()
        } else {
            alert("Wrong Date Format");
        }
    } else {
        alert("Wrong Date Format");
    }
}
function showDate(){
    var userDate = prompt("Enter date in format (DD-MM-YYYY): Example: 22-01-1999")
    validateDateFormat();
}

function occuranceCount(arr, num){
    var count = 0;
    for(var i=0;i<arr.length;i++){
        if (num === arr[i]){
            count++;
        }
    }
    console.log(`count: ${count}`)
    return count;
}

function removeChar(arr, char){
    var count = 0;
    for(var i=0;i<arr.length;i++){
        if (char === arr[i]){
            arr.splice(i , 1);
        }
    }
    return arr;
}

function maxNum(arr){
    var max = 0;
    for(var i=0;i<arr.length;i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}


const emailRegExp = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,6}$/;
const isMatch = emailRegExp.test("@g.co")
console.log(isMatch)

const phoneRegExp = /^\+?\d{2,3}[-\s]?\(?\d{1,4}\)?[-\s]?\d{1,4}[-\s]?\d{1,4}$/;
