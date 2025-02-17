<?php
error_reporting(E_ALL);
ini_set('display_errors', 1);

include("validator.php");
include("bisnesslogic.php");

$rooms=getAllRooms();

$name = $email = $password = $cpassword = $room_n = $ext = $image = '';
$errors = [];
if($_SERVER['REQUEST_METHOD'] === "POST"){
    if (empty($_POST["name"])){
        $errors['name'] = "Name is required";
    }else{
        $name = htmlspecialchars($_POST['name']);
    }

    if (empty($_POST["email"]) && isValidEmail($_POST['email'])){
        $errors['email'] = "Email is required";
    }else{
        $email = htmlspecialchars($_POST['email']);
    }

    if (empty($_POST["password"]) && isValidPassword($_POST['password'])){
        $errors['password'] = "Password is required";
    }else{
        $password = htmlspecialchars($_POST['password']);
    }

    if (empty($_POST['cpassword'])) {
        $errors['cpassword'] = 'Confirm Password is required';
    } elseif ($_POST['password'] !== $_POST['cpassword']) {
        $errors['cpassword'] = 'Passwords do not match';
    } else {
        $cpassword = htmlspecialchars($_POST['cpassword']);
    }

    if (empty($_POST['room_n'])) {
        $errors['room_n'] = 'Room Number is required';
    } else {
        $room_n = htmlspecialchars($_POST['room_n']);
    }

    if (empty($_POST['ext'])) {
        $errors['ext'] = 'Ext is required';
    } else {
        $ext = htmlspecialchars($_POST['ext']);
    }


    if (empty($_FILES['image']['name'])) {
        $errors['image'] = 'Image is required';
    } else {
        $image = $_FILES['image'];
        $target_dir = "images/";
        if (!is_dir($target_dir)) {
            mkdir($target_dir, 0755, true);
        }
        $target_file = $target_dir . basename($_FILES["image"]["name"]);
        if (move_uploaded_file($_FILES["image"]["tmp_name"], $target_file)) {
            // echo "The file " . basename($_FILES["image"]["name"]) . " has been uploaded.";
        } else {
            $errors['images'] = "Sorry, there was an error uploading your file.";
        }

    }

    $entries = [];
    foreach ($_POST as $key => $value) {
        $entries[] = "$key:$value";
    }
    if (!isset($errors['image'])) {
        $ii="images/" . basename($_FILES['image']['name']);
        $entries[] = "image:$ii";
    }

    $entries[] = "\n";

    file_put_contents(
        "users",
        implode(", " ,$entries),
        FILE_APPEND
    );

    if (empty($errors) && insertCustomer($name, $email, $password, $room_n, $ext, $image)) {
        header("Location: pages/users_list.php");
        exit();
    }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Register</title>
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.0.0/dist/css/bootstrap.min.css" integrity="sha384-Gn5384xqQ1aoWXA+058RXPxPg6fy4IWvTNh0E263XmFcJlSAwiGgFAW/dAiS6JXm" crossorigin="anonymous">
    <style>
        h2 {
            padding-left: 22px;
        }
    </style>
</head>
<body>
    <h2 class="mt-3">
        Add Customer
    </h2>

    <form action="index.php" method="post"  class="mr-5 ml-5 mt-3" enctype='multipart/form-data'>
        <!-- name -->
        <div class="input-group mb-3">
            <div class="input-group-prepend">
              <span class="input-group-text" id="basic-addon1">Name</span>
            </div>
            <input type="text" name="name" class="form-control" placeholder="Fullname" aria-label="Fullname" aria-describedby="basic-addon1">
        </div>
        <?php if (isset($errors['name'])): ?>
            <div class="error"><?php echo $errors['name']; ?></div>
        <?php endif; ?>

        <!-- email -->
        <div class="input-group mb-3">
            <div class="input-group-prepend">
              <span class="input-group-text" id="basic-addon1">Email</span>
            </div>
            <input type="text" name="email" class="form-control" placeholder="Email" aria-label="Email" aria-describedby="basic-addon1">
        </div>
        <?php if (isset($errors['email'])): ?>
            <div class="error"><?php echo $errors['email']; ?></div>
        <?php endif; ?>

        <!-- password --> 
        <div class="input-group mb-3">
            <label for="inputPassword6">Password</label>
            <input type="password" name="password" id="inputPassword6" class="form-control mx-sm-3" aria-describedby="passwordHelpInline">
            <small id="passwordHelpInline" class="text-muted">
                Must be 8-20 characters long.
            </small>
        </div>
        <?php if (isset($errors['password'])): ?>
            <div class="error"><?php echo $errors['password']; ?></div>
        <?php endif; ?>

        <!-- confirm password -->
        <div class="input-group mb-3">
            <label for="inputPassword6">Confirm Password</label>
            <input type="password" name="cpassword" id="inputPassword7" class="form-control mx-sm-3" aria-describedby="passwordHelpInline">
            <small id="passwordHelpInline"  class="text-muted">
                Must be 8-20 characters long.
            </small>
        </div>
        <?php if (isset($errors['cpassword']) || $_POST['cpassword'] !== $_POST['password']): ?>
            <div class="error"><?php echo $errors['cpassword']; ?></div>
        <?php endif; ?>

        <!-- Room. No -->
        <div class="input-group mb-3">
            <div class="input-group-prepend">
              <label class="input-group-text" for="inputGroupSelect01">Room. No</label>
            </div>
            <select class="custom-select" name="room_n" id="inputGroupSelect01">
                <?php
                foreach ($rooms as $room){
                    echo "<option selected>'{$room['room_n']}'</option>";
                }
                ?>
            </select>
        </div>
        <?php if (isset($errors['room_n'])): ?>
            <div class="error"><?php echo $errors['room_n']; ?></div>
        <?php endif; ?>

        <!-- ext -->
        <div class="input-group mb-3">
            <div class="input-group-prepend">
              <label class="input-group-text" for="inputGroupSelect01">Ext</label>
            </div>
            <select class="custom-select" name="ext" id="inputGroupSelect02">
                <?php
                foreach ($rooms as $room){
                    echo "<option selected>'{$room['ext']}'</option>";
                }
                ?>
            </select>
        </div>
        <?php if (isset($errors['ext'])): ?>
            <div class="error"><?php echo $errors['ext']; ?></div>
        <?php endif; ?>

        <!-- upload image -->
        <div class="input-group mb-3">
            <div class="input-group-prepend">
                <span class="input-group-text">Upload Image</span>
            </div>
            <div class="custom-file">
                <input type="file" name="image" >
                        </div>
        </div>
        <?php if (isset($errors['image'])): ?>
            <div class="error"><?php echo $errors['image']; ?></div>
        <?php endif; ?>
        

        <button type="submit" class="btn btn-primary">Register</button>
    </form>
</body>
</html>