<?php

	// function for calculating area of rectangle
	function areaRectangle($length, $width) {
		return $length * $width;
	}

	// notice that the post form is not part in this file, yet the code will work
	$length = $_POST["length"];
	$width = $_POST["width"];

?>