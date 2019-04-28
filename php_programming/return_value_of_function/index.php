<!DOCTYPE html>
<html>
	<head>
		<title>My Site</title>
		<link rel="stylesheet" type="text/css" href="styles.css" media="screen">
	</head>

<body>

<!-- 
	Ask the user for a number
-->

<form action="index.php" method="post">
	Please enter a positive number: 
	<br>
	<input type="number" name="num" min=0 >
	<br>
	<br>
	<input type="submit" value="Submit">
	<br>
</form>	

<hr>
<br>

<?php
	// assign input to variable
	$num = $_POST["num"];

	// define the function to cube the input
	function cube($number) {
		// instead of doing an echo this is a more accurate method
		// Note: return should be the last line of the function
		// any instruction action the return line will be ignored!
		return pow($number, 3);
	}

	// call the function and assign its return value to a variable
	$answer = cube($num);
	echo $answer;

?>

</body>

</html>