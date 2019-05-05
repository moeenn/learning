<!DOCTYPE html>
<html>
	<head>
		<title>My Site</title>
		<link rel="stylesheet" type="text/css" href="styles.css" media="screen">
	</head>

<body>

<!-- 
		Constructors:
		It is a function inside a class, that will get called everytime we create an object of that class.
-->	

<?php
/*
	we define a computer as a new class
	It is common convention to use title case for names of classes
*/
	class Computer {
		// these are the attributes of the class
		var $cpu;
		var $gpu;
		var $memory;
		var $storage;

/*
		define the constructor function
		the functionality of the constructor function is just like any other function
		we have declared the arguments that this function will take
*/
		function __construct($aCpu, $aGpu, $aMemory, $aStorage) {
			$this->cpu = $aCpu;
			$this->gpu = $aGpu;
			$this->memory = $aMemory;
			$this->storage = $aStorage;

/*
			Note: $this is a keyword. It refers to the name of the object that is being created under our class
			We assign values to it just like we normally would to an attribute of a object
			see (Classes and Objects)
*/
		}
	}

	// let's create a new object and store some attributes in it
	$computer1 = new Computer("Xeon", "Intel Integrated", "8 Gb", "720 Gb");
?>

<h3>Computer Specs</h3> <br>
<p1>
CPU: <?php echo $computer1->cpu ?><br>
GPU: <?php echo $computer1->gpu ?><br>
RAM: <?php echo $computer1->memory ?><br>
DISK: <?php echo $computer1->storage ?><br>
</p1>

</body>

</html>