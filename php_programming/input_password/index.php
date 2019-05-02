<!DOCTYPE html>
<html>
	<head>
		<title>My Site</title>
		<link rel="stylesheet" type="text/css" href="styles.css" media="screen">
	</head>

<body>

<!--
	Exercise: Create a login Page that displays message "Login Successful" when user enters the correct password
	Otherwise, it asks for the password again
-->	

<form action="index.php" method="post">
	Username: <input type="text" name="username"><br>
	Password: <input type="password" name="password"><br>
	<input type="submit" value="Login">
	<input type="Reset" value="Reset"><br>
	<hr>
	<br>
</form> 

<?php

	$username = $_POST["username"];
	$password = $_POST["password"];

	// for simplicity set the correct username password
	// use associative arrays
	$logins = array("moeen"=>"123_apple", "saad"=>"q1w2e3", "amber"=>"envy9000");

	if( $password == $logins["$username"] ) {
		echo "Login Successful <br>";
	} else {
		echo "Login Failed <br>";
	}

?>

</body>

</html>