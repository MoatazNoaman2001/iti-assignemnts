document.getElementById("displayUserBtn").onclick = function () {
    const userId = document.getElementById("userId").value;
    if (userId) {
        const xhr = new XMLHttpRequest();
        xhr.open("GET", `https://reqres.in/api/users/${userId}`, true);
        xhr.onreadystatechange = function () {
            if (xhr.readyState === 4 && xhr.status === 200) {
                const response = JSON.parse(xhr.responseText);
                if (response.data) {
                    displayUser(response.data, "singleUserDetails");
                } else {
                    document.getElementById("singleUserDetails").innerHTML = "<p>user not found</p>";
                }
            }
        };
        xhr.onerror = function(x){
            console.log(`error get data :${x}`);
        }
        xhr.send();
    } else {
        alert("id is not valid");
    }
};

function fetchAllUsers() {
    const xhr = new XMLHttpRequest();
    xhr.open("GET", "https://reqres.in/api/users", true);
    xhr.onreadystatechange = function () {
        if (xhr.readyState === 4 && xhr.status === 200) {
            const response = JSON.parse(xhr.responseText);
            if (response.data) {
                populateDropdown(response.data);
            }
        }
    };
    xhr.send();
}

fetchAllUsers();


function fetchUserById(userId) {
    const xhr = new XMLHttpRequest();
    xhr.open("GET", `https://reqres.in/api/users/${userId}`, true);
    xhr.onreadystatechange = function () {
        if (xhr.readyState === 4 && xhr.status === 200) {
            const response = JSON.parse(xhr.responseText);
            if (response.data) {
                displayUser(response.data, "dropdownUserDetails");
            }
        }
    };
    xhr.send();
}
function populateDropdown(users) {
    const dropdown = document.getElementById("userDropdown");
    users.forEach(user => {
        const option = document.createElement("option");
        option.value = user.id;
        option.textContent = `${user.first_name} ${user.last_name}`;
        dropdown.appendChild(option);
    });

    dropdown.onchange= function () {
        const selectedUserId = this.value;
        if (selectedUserId) {
            fetchUserById(selectedUserId);
        } else {
            document.getElementById("dropdownUserDetails").innerHTML = "";
        }
    };
}

function displayUser(user, targetId) {
    const container = document.getElementById(targetId);

    //  i write this in htmlfile and then past it her
    container.innerHTML = `
        <p><strong>first name:</strong> ${user.first_name}</p>
        <p><strong>last name:</strong> ${user.last_name}</p>
        <img src="${user.avatar}" alt="${user.first_name}'s avatar">
    `;
}