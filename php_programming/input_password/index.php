<!DOCTYPE html>
<html>
	<head>
		<title>My Site</title>
		<link rel="stylesheet" type="text/css" href="styles.css" media="screen">
	</head>

<body>

<form action="index.php" method="post">
	Username: <input type="text" name="username">
	<br>
	Password: <input type="password" name="pwd">
	<br>
	<input type="submit">
	<br>
</form>	

<?php
	$username = $_POST["username"];
	$pwd = $_POST["pwd"];

	echo "<p1>The user $username entered their password $pwd</p1>"
?>

</body>

</html>