<?php
include("/var/www/html/lab4/config.php");

function getAllRooms(){
    global $host, $username, $password, $dbname;
    try {
        $pdo = new PDO("mysql:host=$host;dbname=$dbname", $username, $password);
        $pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

        $stmt = $pdo->prepare("SELECT * FROM room");
        $stmt->execute();

        $rooms = $stmt->fetchAll(PDO::FETCH_ASSOC);

        return $rooms; 
    } catch(PDOException $e) {
        echo "Connection failed: " . $e->getMessage();
    }
}

?>