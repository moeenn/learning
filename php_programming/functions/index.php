<!DOCTYPE html>
<html>
	<head>
		<title>My Site</title>
		<link rel="stylesheet" type="text/css" href="styles.css" media="screen">
	</head>

<body>

<!-- 
	This is a simple form that asks the user for their name and age
-->

<form action="index.php" method="post">
	Please enter your Name: 
	<input type="text" name="name">
	<br>
	Please enter your Age:
	<input type="number" name="age" min="0" max="100">
	<br>
	<input type="submit" value="Submit">
	<br>
	<hr>
</form>

<?php

	// Our function that takes two parameter: name and age
	function message($name, $age) {
		echo "Hello $name, you are $age years old. <br>";
	}
	
	// bring in the values entered by the user
	$my_name = $_POST["name"];
	$my_age = $_POST["age"];

	// call the function
	// always remember which argument is for what variable!
	message($my_name, $my_age);

	// see what happens when you mix things up
	message($my_age, $my_name);

?>


</body>

</html>