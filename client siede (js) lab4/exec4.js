document.getElementById('loginButton').onclick = function() {
    const userName = document.getElementById('userName').value;

    if (!userName) {
        alert('Please enter your username');
        return;
    }

    localStorage.setItem('userName', userName);

    window.location.href = 'welcome.html';
};