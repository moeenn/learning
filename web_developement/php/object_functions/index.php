<!DOCTYPE html>
<html>
	<head>
		<title>My Site</title>
		<link rel="stylesheet" type="text/css" href="styles.css" media="screen">
	</head>

<body>

<!--
		Object Functions: It is a function that we define inside a class ( just like construct function ) then the objects of that 
		class can use that function.
-->	
<?php
		// lets define a new class
		class Person {
			var $name;
			var $age;
			var $gender;

			// define the constuct function
			function __construct($aName, $aAge, $aGender){
				$this->name = $aName;
				$this->age = $aAge;
				$this->gender = $aGender;
			}	
		
			// let's define our object function
			// Wemen retire at age 55 and men retire at age 60
			function hasRetired() {
				$retireAgeWomen = 55;
				$retireAgeMen = 60;

				if($this->gender == "Male" && $this->age >= $retireAgeMen) {
					return "Retired";
				} else if ($this->gender == "Female" && $this->age >= $retireAgeWomen ) {
					return "Retired";
				} else {
					return "Not Retired";
				}
			}	
		}

		// lets create couple of objects
		$person1 = new Person("Jane", 56, "Female");
		$person2 = new Person("Ali", 59, "Male");
?>

<!-- Display results of the object functions to the user -->
<?php echo $person1->name ?> is only <?php echo $person1->age ?> years old. They have <?php echo $person1->hasRetired() ?><br>
<?php echo $person2->name ?> is only <?php echo $person2->age ?> years old. They have <?php echo $person2->hasRetired() ?><br>

</body>

</html>