<!DOCTYPE html>
<html>
	<head>
		<title>My Site</title>
		<link rel="stylesheet" type="text/css" href="styles.css" media="screen">
	</head>

<body>

<!-- 
		Class:
		A class is a used to represent any realworld entity e.g. book, car, person etc.
		It can be thought of as a custom data type, much like a string, boolean, integer etc.
		Every class will have certain attributes i.e. properties

		Object:
		An object is an instance of a class i.e. it is a variable we create using our custom data type (i.e. class)

-->	

<!-- 
		Let's create a website that is able to calculate the area of a rectangle
-->

<?php
	// we define a rectangle as a new class
	class Rectangle {
		// these are the attributes of the class
		var $length;
		var $width;
	}

	// let's create a new object and store the user input in that object
	$rectangle1 = new Rectangle;

	$rectangle1->length = $_POST["length"];
	$rectangle1->width = $_POST["width"];

	// now lets calculate the area
	$area = $rectangle1->length * $rectangle1->width;
?>

<form action="index.php" method="post">
	Length: <input type="number" name="length" min=0 step=0.01><br>
	Width: <input type="number" name="width" min=0 step=0.01><br>
	<input type="submit" value="Submit"><br>
</form>	

<hr>
<br>

The Area of the rectangle is <?php echo $area ?><br>

</body>

</html>