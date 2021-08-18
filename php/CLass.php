<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Inheritance</title>
</head>
<body>
    <?php
    class Books{
        
        var $price;
        var $title;
        
        function getPrice($p){
            $price = $p;
            echo "The price of the book is: $price <br/>";
        }

        function getTitle($t){
            $title = $t;
            echo "The Title of the book is: $title <br/>";
        }
    }
    $physics = new Books;
    $maths = new Books;
    $chemistry = new Books;

    $physics->getPrice(100);
    $maths->getPrice(50);
    $chemistry->getPrice(150);

    $physics->getTitle("Physics");
    $maths->getTitle("Maths");
    $chemistry->getTitle("Chemistry");
    
    ?>
</body>
</html>