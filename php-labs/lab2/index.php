<?php
ini_set('display_errors', '1');
ini_set('display_startup_errors', '1');
error_reporting(E_ALL);

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $firstName = $_POST['firstName'];
    $lastName = $_POST['lastName'];
    $address = $_POST['address'];
    $country = $_POST['country'];
    $gender = $_POST['gender'];
    $skills = implode(", ", $_POST['skills']);
    $username = $_POST['username'];
    $password = $_POST['password'];
    $department = $_POST['department'];
    $codeVerification = $_POST['codeVerification'];

    if (empty($firstName) || empty($lastName) || empty($address) 
        || empty($country) || empty($gender) || empty($skills) 
        || empty($username) || empty($password) || empty($department) || empty($codeVerification)
    ) {
        echo "<h1>Invalid inputs</h1>";
        echo "<p>First Name: $firstName</p>";
        echo "<p>Last Name: $lastName</p>";
        echo "<p>Address: $address</p>";
        echo "<p>Country: $country</p>";
        echo "<p>Gender: $gender</p>";
        echo "<p>Skills: $skills</p>";
        echo "<p>Username: $username</p>";
        echo "<p>Department: $department</p>";
        echo "<p>Code Verification: $codeVerification</p>";  
    }else{
        if ($gender === "Male")
            echo "<h1>Thanks Mr. $firstName $lastName</h1>";
        else
            echo "<h1>Thanks Ms. $firstName $lastName</h1>";

        echo "<h2>Registration Successful</h2>";
        echo "<p>First Name: $firstName</p>";
        echo "<p>Last Name: $lastName</p>";
        echo "<p>Address: $address</p>";
        echo "<p>Country: $country</p>";
        echo "<p>Gender: $gender</p>";
        echo "<p>Skills: $skills</p>";
        echo "<p>Username: $username</p>";
        echo "<p>Department: $department</p>";
        echo "<p>Code Verification: $codeVerification</p>";
        
        file_put_contents("accounts", "
            Name: $firstName $lastName
            address: $address
            country: $country
            gender: $gender
            skills: $skills
            username: $username
            department: $department
            code: $codeVerification
        ", FILE_APPEND);

        $fileContent = file_get_contents("accounts");
        $entries = explode("Name", trim($fileContent));
        $data = [];

        echo "<table border='1' style='border-collapse: collapse; width: 100%;'>";

        

        foreach($entries as $entry){
            $lines = explode("\n", trim($entry));
            foreach ($lines as $line) {
                if (trim($line) != "") {
                    list($key, $value) = explode(":", $line, 2);
                    $data[trim($key)] = trim($value);
                }
            }
    
            echo "<tr>";
            foreach ($data as $key => $value) {
                // echo "<th style='padding: 15px;'>$key</th>";
            }
            echo "</tr>";

            echo "<tr>";
            foreach ($data as $key => $value) {
                echo "<td style='padding: 15px;'>$value</td>";
            }
            echo "</tr>";
        }

        echo "</table>";

    }
}
?>

