<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Functions</title>
</head>
<body>
<?php
function add($num1,$num2){
    $result = $num1 + $num2;
    echo "Addition of two numbers are: $result<br/>";

function sub($num1,$num2){
    $result = $num1 + $num2;
    echo "Subtraction of two numbers are: $result<br/>";

}
}
$a = 10;
$b = 20;

add($a,$b);
sub($a,$b);
?>
</body>
</html>