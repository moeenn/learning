<!DOCTYPE html>
<html>
	<head>
		<title>My Site</title>
		<link rel="stylesheet" type="text/css" href="styles.css" media="screen">
	</head>

<body>

<form action="index.php" method="post">
	Please select all the brands of cars that you like:
	<br>
	<input type="checkbox" name="cars[]" value="honda"> Honda
	<br>
	<input type="checkbox" name="cars[]" value="toyota"> Toyota
	<br>
	<input type="checkbox" name="cars[]" value="citroen"> Citroen
	<br>
	<input type="checkbox" name="cars[]" value="lambda"> Lambda
	<br>
	<br>
	<input type="submit" value="Submit">
	<input type="reset" value="Reset">
</form>	

<?php

	$cars = $_POST["cars"];
	$no_of_selections = count($cars);

	echo "You have selected ";
	echo $no_of_selections;	
	echo " cars. <br>";
?>

</body>

</html>