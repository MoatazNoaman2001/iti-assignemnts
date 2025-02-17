<?php
include("/var/www/html/lab4/config.php");

function getAllCustomers(){
    global $host, $username, $password, $dbname;
    try {
        $pdo = new PDO("mysql:host=$host;dbname=$dbname", $username, $password_db);
        $pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

        $stmt = $pdo->prepare("SELECT * FROM customer");
        $stmt->execute();

        $customers = $stmt->fetchAll(PDO::FETCH_ASSOC);

        return $customers; 
    } catch(PDOException $e) {
        echo "Connection failed: " . $e->getMessage();
    }
}

?>