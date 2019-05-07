<?php

	class Circle {
		private $radius;

		// constructor function
		function __construct($radius) {
			$this->setRadius($radius);
		}

		// getter function
		function getRadius() {
			return $this->radius;
		}

		// setter function
		function setRadius($radius) {
			// radius cannot be negative
			if ( $radius < 0 ) {
				$this->radius = 0;
			} else {
				$this->radius = $radius;				
			}
		}

		// object function for calculating area
		function calc_area() {
			$pi = 3.142;
			return $pi * pow( $this->radius, 2);
		}
	}

?>