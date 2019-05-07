<!DOCTYPE html>
<html>
	<head>
		<title>My Site</title>
		<link rel="stylesheet" type="text/css" href="styles.css" media="screen">
	</head>

<body>

<!-- 
	The header of every page my website is same
	I can modularize it and then incude it at top of every page
-->
<?php include "header.html"; ?>

<form action="index.php" method="post">
	Length: <input type="number" name="length" min="0" step="0.001"><br>
	Width:  <input type="number" name="width" min="0" step="0.001"><br>
	<input type="submit" value="Submit">
</form>

<br>
<br>

<?php
/*	
	Not only can be include static html files using include tags
	we can also include php code 
*/	
	include "functions.php";
	echo areaRectangle($length, $width);
?>

</body>

</html>