<?php
include("/var/www/html/lab4/config.php");
function loginAdmin($name, $password){
    try{
        $pdo = new PDO("mysql:host=$host;dbname=$dbname", $username, $password);
        $pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

        $stmt = $pdo->prepare("SELECT password FROM users WHERE username = :username");
        $stmt->bindParam(':username', $name);
        $stmt->execute();

        $user = $stmt->fetch(PDO::FETCH_ASSOC);

        if ($user['password'] == $password){
            return true;
        }else{
            return false;
        }
    }catch(PDOException $e){
        error_log("Database error: " . $e->getMessage());
        return false;
    }
}

?>