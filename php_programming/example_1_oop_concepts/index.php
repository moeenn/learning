<!DOCTYPE html>
<html>
	<head>
		<title>My Site</title>
		<link rel="stylesheet" type="text/css" href="styles.css" media="screen">
	</head>

<body>

<?php
	// include our class files
	include "rectangle.php";
	include "circle.php";
	include "units.php";

	// define new objects
	$rectangle1 = new Rectangle(20, 30);
	$circle1 = new Circle(15);
	$units1 = new Units("cm2");

	// calculate area of our rectangle and circle
	echo "The area of the Rectangle is " . $rectangle1->calc_area() . " " . $units1->getUnits() . "<br>";
	echo "The area of the Circle is " . $circle1->calc_area() . " " . $units1->getUnits() . "<br>";

?>

</body>

</html>