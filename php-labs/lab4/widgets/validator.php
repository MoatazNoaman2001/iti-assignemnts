<?php
function isValidEmail($email) {
    $regex = '/^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/';

    if (preg_match($regex, $email)) {
        return true;
    } else {
        return false;
    }
}
function isValidPassword($password) {
    $regex = '/^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$/';
    
    if (preg_match($regex, $password)) {
        return true;
    } else {
        return false;
    }
}
function isEmpty($feild) {
    return empty($feild);
}
function isImage($image){
    $imageInfo = @getimagesize($file);
    if ($imageInfo === false) {
        return false;
    }
    return true;
}

?>