<?php

    if (isset($_POST["name"]) && isset($_POST["surname"]) && isset($_POST["email"]) && isset($_POST["message"])) {
        $message = $_POST["name"] . $_POST["surname"] . "<".$_POST["email"]."> :" . $_POST["message"];
        $myfile = fopen("messages.txt", "a");
        fwrite($myfile, $message);
        fclose($myfile);
    }

    header('Location: index.html'); 

?>