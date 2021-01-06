<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Arthur Pons</title>
    <link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
    <div id="particles-js"></div>

    <menu>
        <a href="index.html"><p>Home</p></a>
        <a href="cv.html"><p>CV</p></a>
        <a href="hobbies.html"><p>Hobbies</p></a>
        <a href="contact.php"><p>Contact</p></a>
        <a href="admin.php"><p>Admin</p></a>
    </menu>


    <main>        
        <h1>Page d'administration</h1>

        <p>Normalement, cette page est cachée mais pour les besoins du TP, elle est laissée en accès libre.</p>
        <p>Il faudra penser à bien régler les règles d'affichage des erreurs afin de ne pas déteriorer l'affichage du site lorsqu'il n'y a aucun message.</p>

        <?php
            /*
            if ($file = fopen("messages.txt", "r")) {
                while(!feof($file)) {
                    $textperline = fgets($file);
                    echo "<p>$textperline</p>";
                }
                fclose($file);
            } else {
                echo "<p>Aucun commentaire pour le moment...</p>";
            }*/
        ?>


    </main>

    <script src="js/particles.js"></script>
    <script src="js/app.js"></script>

</body>
</html>