let adWindow;

document.getElementById('openAd').onclick = function() {
    document.getElementById('message').textContent = 'Opening advertising window in 3 seconds...';

    setTimeout(() => {
        adWindow = window.open('', '_blank', 'width=600,height=400');
        if (adWindow) {
            adWindow.document.write(`
                <!DOCTYPE html>
                <html lang="en">
                <head>
                    <meta charset="UTF-8">
                    <meta name="viewport" content="width=device-width, initial-scale=1.0">
                    <title>Ad</title>
                </head>
                <body>
                    <h1>Welcome to Our Amazing Product!</h1>
                    <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>
                    <p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
                    <p>Thank you for your interest in our product. We believe it can bring exceptional value and improve your life in countless ways!</p>
                </body>
                </html>
            `);
        } else {
            alert('Pop-up blocked! Please allow pop-ups for this site.');
        }
    }, 3000);
};

document.getElementById('closePage').onclick = function(event) {
    event.preventDefault();
    window.close();
};