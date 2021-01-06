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
        <a href="contact.html"><p>Contact</p></a>
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
            }
        */
        ?>

    <p>Cette carte n'a aucune autre utilité que celle de remplir les demandes du DM...</p> <br> <br> <br> <br>
    
    <img src="https://lemouvementassociatif.org/wp-content/uploads/2017/03/CartedefranceDLA.png" usemap="#image-map" alt="Carte Du Lourd Royaume De Bonne Francie.">

    <map name="image-map">
        <area target="_blank" alt="Région Hauts de France" title="Région Hauts de France" href="https://www.hautsdefrance.fr" coords="579,9,513,36,499,132,525,225,659,270,714,152,696,103,651,67,623,57" shape="poly">
        <area target="_blank" alt="Région Ile de France" title="Région Ile de France" href="https://www.iledefrance.fr" coords="526,226,655,268,647,324,586,357,543,333,518,303,498,256" shape="poly">
        <area target="_blank" alt="Région Grand Est" title="Région Grand Est" href="https://www.grandest.fr" coords="752,120,723,143,705,172,695,200,679,227,665,264,652,287,651,316,660,337,680,371,694,382,719,375,746,366,761,378,771,404,795,418,825,398,865,369,930,408,947,426,967,404,968,350,979,288,1007,242,944,231,860,200,754,159,753,142,748,138" shape="poly">
        <area target="_blank" alt="Région Nouvelle Aquitaine" title="Région Nouvelle Aquitaine" href="https://www.nouvelle-aquitaine.fr" coords="339,559,292,563,282,731,270,787,247,865,226,899,287,933,331,949,375,905,354,843,436,818,459,761,495,709,542,714,576,665,578,622,578,561,492,553,434,486,388,469,319,482,346,550,292,562" shape="poly">
        <area target="_blank" alt="Région Occitanie" title="Région Occitanie" href="https://www.laregion.fr/" coords="505,710,496,717,458,763,455,790,389,830,359,842,372,904,339,941,363,971,418,970,426,956,491,978,530,998,567,1006,630,996,637,920,710,875,751,858,751,788,715,795,677,723,646,719,602,722,563,762,539,718,543,730,521,712" shape="poly">
        <area target="_blank" alt="Région Normandie" title="Région Normandie" href="https://www.normandie.fr" coords="506,139,533,227,501,271,457,307,466,323,438,343,421,309,405,326,306,302,290,281,286,239,273,201,257,165" shape="poly">
        <area target="_blank" alt="Région Bretagne" title="Région Bretagne" href="https://www.bretagne.bzh" coords="104,262,161,262,281,292,311,355,248,398,135,427,34,346,28,288,67,271" shape="poly">
        <area target="_blank" alt="Région Pays de la Loire" title="Région Pays de la Loire" href="https://www.paysdelaloire.fr" coords="414,320,420,327,456,361,406,428,384,463,342,473,340,552,273,556,221,492,197,431,299,372,316,309,368,309" shape="poly">
        <area target="_blank" alt="Région Corse" title="Région Corse" href="https://www.corse.fr" coords="1011,875,970,922,940,996,987,1058,1034,1058,1066,934,1030,878" shape="poly">
        <area target="_blank" alt="Région Centre Val de Loire" title="Région Centre Val de Loire" href="https://www.centre-valdeloire.fr" coords="498,284,450,305,465,336,451,352,445,400,406,438,399,468,445,501,486,548,523,554,590,538,611,502,614,378" shape="poly">
        <area target="_blank" alt="Région Bourgogne Franche Comté" title="Région Bourgogne Franche Comté" href="https://www.bourgognefranchecomte.fr" coords="645,325,681,369,749,364,763,395,811,400,867,367,934,409,914,452,877,503,846,552,811,556,781,527,763,568,719,570,699,570,667,511,625,515,618,432,611,392,622,333,634,334" shape="poly">
        <area target="_blank" alt="Région Auvergne Rhône-Alpes" title="Région Auvergne Rhône-Alpes" href="https://www.auvergnerhonealpes.fr" coords="606,510,561,546,582,591,578,654,548,692,550,726,572,750,614,744,653,716,689,758,709,786,752,788,790,791,825,803,820,775,825,744,864,720,873,696,921,682,941,656,932,615,918,559,901,522,843,560,780,538,752,577,688,569,682,548,661,521" shape="poly">
        <area target="_blank" alt="Région PACA" title="Région PACA" href="https://www.maregionsud.fr" coords="888,700,914,700,941,720,944,745,936,766,1022,786,1004,813,969,869,905,938,828,937,772,925,742,884,761,792,833,810,830,780,824,769,857,732,892,721,896,710,1021,824" shape="poly">
    </map>


    </main>

    <script src="js/particles.js"></script>
    <script src="js/app.js"></script>

</body>
</html>