<!DOCTYPE html>
<html>
	<head>
		<title>My Site</title>
		<link rel="stylesheet" type="text/css" href="styles.css" media="screen">
	</head>

<body>

<form action="index.php" method= "get">
	Name: <input type="text" name="Name"><br>
	Address: <input type="text" name="Address"><br>
	<input type="submit" text="Enter"><br><br>
</form>

<?php 
	echo $_GET["Name"];
	echo $_GET["Address"];
?>

</body>

</html>