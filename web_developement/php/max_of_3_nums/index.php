<!DOCTYPE html>
<html>
	<head>
		<title>My Site</title>
		<link rel="stylesheet" type="text/css" href="styles.css" media="screen">
	</head>

<body>

<?php

	function maximum($num1, $num2, $num3) {
		if ( $num1 >= $num2 && $num1 >= $num3 ) {
			return $num1;
		} else if ( $num2 >= $num1 && $num2 >= $num3 ) {
			return $num2;
		} else if ( $num3 >= $num1 && $num3 >= $num2 ) {
			return $num3;
		}
	}


	echo maximum(500, 400, 400);

?>

</body>

</html>