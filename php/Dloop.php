<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    $a = 10;
    do{
        if($a==15){
            // echo"value of a is: $a<br/>";
            $a=$a+1;
        }
        echo"value of a is: $a<br/>";
        $a=$a+1;
    }while($a<20);
    
    ?>
</body>
</html>