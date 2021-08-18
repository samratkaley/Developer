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
   

    class Author extends Books{
        var $name;

        function setName($auth){
            $name = $auth;
            echo "Name of the author is: $name";
        }
    }

    $physics = new Author;
    $maths = new Author;
    $chemistry = new Author;
    $Pauthor = new Author;

    $physics->getPrice(100);
    $maths->getPrice(50);
    $chemistry->getPrice(150);

    $physics->getTitle("Physics");
    $maths->getTitle("Maths");
    $chemistry->getTitle("Chemistry");
    
    $Pauthor->setName("Samrat");
    

    ?>
</body>
</html>