<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>TP3</title>
</head>
<body>
    <h1>Forms</h1>

    <map name="map">
        <area shape="circle" coords="150,150,50" href="https://google.com">
        <area shape="circle" coords="350,150,50" href="https://www.wikipedia.org">
        <area shape="rect" coords="100,300,400,400" href="https://twitter.com">
    </map>
    <img src="home.jpg" usemap="#map" title="map" />

    <form action="" method="POST">

        <input name="name" id="" placeholder="Name" required>
        <input name="surname" id="" placeholder="Surname" required>
        <select name="color" id="" placeholder="Color" required>
            <option value="Red">Red</option>
            <option value="Green">Green</option>
            <option value="Blue">Blue</option>
        </select>


        <textarea name="Comment" id="" cols="30" rows="10" placeholder="Comment" required></textarea>
        <input type="submit" value="Send">


    </form>


    <?php

    if (isset($_POST["name"])) {
        print "Hej ";
        print $_POST["name"] ;
        print " ";
        print $_POST["surname"];
        print " !";
        print "<br><br><hr>";
        print "Din favoritfärg är ";
        print $_POST["color"];
        print "<br>";
        print "Tack för din kommentar : ";
        print $_POST["Comment"];
    }
        

    
    ?>

</body>
</html>