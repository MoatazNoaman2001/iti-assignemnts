let counter = 0;
const incrementButton = document.getElementById('incrementBtn');
const decrementButton = document.getElementById('decrementBtn');
const counterDisplay = document.getElementById('counterValue');
incrementButton.onclick = function() {
    counter++;
    counterDisplay.textContent = counter;
};
decrementButton.onclick = function() {
    counter--;
    counterDisplay.textContent = counter;
};