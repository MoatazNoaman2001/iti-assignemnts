document.getElementById("save").onclick = function(){
    const username = document.getElementById("username");
    const password = document.getElementById("password");
    const rememberMe = document.getElementById("rememberMe").checked;

    if (rememberMe){
        if (username && password){
            localStorage.setItem("username",username);
            localStorage.setItem("password" , password);
            alert("saved")
        }else{
            alert("please enter")
        }
    }else{
        localStorage.removeItem("username");
        localStorage.removeItem("password");
        alert("Login details not saved.");
    }

    window.onload = () => {
        const savedUsername = localStorage.getItem("username");
        const savedPassword = localStorage.getItem("password");
        if (savedUsername && savedPassword) {
            document.getElementById("username").value = savedUsername;
            document.getElementById("password").value = savedPassword;
        }
    };


    //bunos 
    // if we like to store in cookies
    
    // i made funs we could subsetute them 

    function setCookie(name, value, days) {
        const date = new Date();
        date.setTime(date.getTime() + (days * 24 * 60 * 60 * 1000));
        const expires = `expires=${date.toUTCString()}`;
        document.cookie = `${name}=${value};${expires};path=/`;
    }

    function getCookie(name) {
        const cookies = document.cookie.split(';');
        for (let i = 0; i < cookies.length; i++) {
            let cookie = cookies[i].trim();
            if (cookie.startsWith(`${name}=`)) {
                return cookie.substring(name.length + 1);
            }
        }
        return "";
    }

    function deleteCookie(name) {
        document.cookie = `${name}=; expires=Thu, 01 Jan 1970 00:00:00 UTC; path=/;`;
    }

    function login() {
        const username = document.getElementById("username").value;
        const password = document.getElementById("password").value;
        const remember = document.getElementById("rememberMe").checked;

        if (remember) {
            setCookie("username", username, 7);
            setCookie("password", password, 7);
        } else {
            deleteCookie("username");
            deleteCookie("password");
        }
        alert("data saved!");
    }

    function populateFromCookies() {
        const username = getCookie("username");
        const password = getCookie("password");

        if (username) document.getElementById("username").value = username;
        if (password) document.getElementById("password").value = password;
    }

}