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
function insertCustomer($name , $email , $password, $room_n, $ext , $image){
    global $host, $username, $password, $dbname;
    try {
        $pdo = new PDO("mysql:host=$host;dbname=$dbname", $username, $password);
        $pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
        $stmt = $conn->prepare("INSERT INTO customer (fullname, email, password, image) VALUES (:fullname, :email, :password, :image)");
            $stmt->execute([
                ':fullname' => $name,
                ':email' => $email,
                ':password' => $password,
                ':image' => $target_file
            ]);

            $stmt = $conn->prepare("INSERT INTO room (room_n, ext, user_email) VALUES (:room_n, :ext, :user_email)");
            $stmt->execute([
                ':room_n' => $room_n,
                ':ext' => $ext,
                ':user_email' => $email
            ]);

        return true;

    } catch(PDOException $e) {
        echo "Connection failed: " . $e->getMessage();
        return false;
    }
}
?>