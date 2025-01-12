function addNumbers() {
    const num1 = parseFloat(prompt("Enter first number:"));
    const num2 = parseFloat(prompt("Enter second number:"));

    if (isNaN(num1) || isNaN(num2)) {
        alert("Please enter valid numbers");
    } else {
        const result = num1 + num2;
        alert(`The sum of ${num1} and ${num2} is ${result}.`);
    }
}
function subtractNumbers() {
    const num1 = parseFloat(prompt("Enter first number:"));
    const num2 = parseFloat(prompt("Enter second number:"));

    if (isNaN(num1) || isNaN(num2)) {
        alert("Please enter valid numbers");
    } else {
        const result = num1 - num2;
        alert(`The result of ${num1} - ${num2} is ${result}.`);
    }
}
document.getElementById("addButton").onclick = addNumbers;
document.getElementById("subtractButton").onclick = subtractNumbers;
