<!DOCTYPE html>
<html>
	<head>
		<title>My Site</title>
		<link rel="stylesheet" type="text/css" href="styles.css" media="screen">
	</head>

<body>

<!-- 

We are four studens and we would like to show the user their grades individually
Studen Names are:
1. Asad
2. Bilal
3. Chohan
4. Dawar

-->

<form action="index.php" method="post">
	Please select a student to view their final grade:
	<br>
	<input type="radio" name="studenName" value="Asad"> Asad
	<br>
	<input type="radio" name="studenName" value="Bilal"> Bilal
	<br>
	<input type="radio" name="studenName" value="Chohan"> Chohan
	<br>
	<input type="radio" name="studenName" value="Dawar"> Dawar
	<br>
	<br>
	<input type="submit" value="submit">
	<br>
	<br>
	<hr>
	<br>
</form>	


<?php
/*

Associative Arrays: 
We use associative arrays to store key pair values. 
This means that we have a unique key (e.g. username) and the corresponding value against that key (e.g. password)

*/
	// in this array Asad is unique key and A is its value
	$studentGrades = array("Asad"=>"A-", "Bilal"=>"F", "Chohan"=>"B+", "Dawar"=>"A+");


	// if we want to change the value of a key we can
	$studentGrades["Chohan"] = "D+";


	// lets assign the user input to a variable for easy use
	$studenName = $_POST["studenName"];

	// lets print the value of a unique key
	echo "$studenName scored the grade of $studentGrades[$studenName].";

	// Note that we need to know the key in order to get the associated value
	// We can't get the values simply by using array index numbers!

	// Furthermore, make sure that all keys inside the  associative array are unique

?>

</body>

</html>