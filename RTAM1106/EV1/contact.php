<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Arthur Pons</title>
    <link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>

    <menu>
        <a href="index.html"><p>Home</p></a>
        <a href="cv.html"><p>CV</p></a>
        <a href="hobbies.html"><p>Hobbies</p></a>
        <a href="contact.php"><p>Contact</p></a>
        <a href="admin.php"><p>Admin</p></a>
    </menu>


    <main>
        <h2>Contact Me</h2>


        <form action="contact.php" method="post">
            <input type="text" name="name" placeholder="Name" required>
            <input type="text" name="surname" placeholder="Surname" required>
            <input type="email" name="email" placeholder="Your email address" required>
            <textarea name="message" cols="30" rows="10" required></textarea>

            <button type="submit" class="blue-button">Send my message</button>
        </form>

        <?php
            if(isset(_POST["name"]) && isset(_POST["surname"]) && isset(_POST["email"]) && isset(_POST["email"]) && isset(_POST["message"])){
                $message = $_POST["name"] . " " . $_POST["surname"] . "  [".$_POST["email"]."] : " . $_POST["message"];
                echo "<p>$message</p>";
            }
        ?>

    </main>    

</body>
</html>