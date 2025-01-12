const textInput = document.getElementById('textInput');
const uppercaseBtn = document.getElementById('uppercaseBtn');
const lowercaseBtn = document.getElementById('lowercaseBtn');
const hyphenateBtn = document.getElementById('hyphenateBtn');
const output = document.getElementById('output');

function updateOutput(transformedText) {
    output.textContent = transformedText;
}

uppercaseBtn.onclick = () => {
    const transformedText = textInput.value.toUpperCase();
    updateOutput(transformedText);
};
lowercaseBtn.onclick = () => {
    const transformedText = textInput.value.toLowerCase();
    updateOutput(transformedText);
};
hyphenateBtn.onclick = () => {
    const transformedText = textInput.value.replace(/\s+/g, '-');
    updateOutput(transformedText);
};
