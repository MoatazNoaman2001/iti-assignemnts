document.getElementById("validateBtn").onclick = function() {
    const fullName = document.getElementById("fullName").value;
    const email = document.getElementById("email").value;

    const fullNameRegex = /^(?:[A-Za-z]{3,})(?: [A-Za-z]{3,})+$/;
    const emailRegex = /^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.(com|net|edu|org)(\.eg)?$/;

    const isFullNameValid = fullNameRegex.test(fullName);
    const isEmailValid = emailRegex.test(email);

    const fullNameError = document.getElementById("fullNameError");
    const emailError = document.getElementById("emailError");

    if (!isFullNameValid) {
        fullNameError.textContent = "invalid full name make sure it contain two parts and each part at least 3 chars.";
    } else {
        fullNameError.textContent = "";
    }

    if (!isEmailValid) {
        emailError.textContent = "invalid email make sure you typed right.";
    } else {
        emailError.textContent = "";
    }

    if (isFullNameValid && isEmailValid) {
        alert("full name and email is invalid!");
    }
};