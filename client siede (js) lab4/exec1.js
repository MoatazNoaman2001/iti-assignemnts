document.getElementById("btn").onclick = function() {
    setInterval(() => {
        document.getElementById("current-time").textContent = new Date().toLocaleTimeString();
    }, 1000);
}