<?php 

	class Rectangle {
		private $length;
		private $width;

		// getter functions
		function getLength() {
			return $this->length;
		}

		function getWidth() {
			return $this->width;
		}

		// setter functions for the class
		function setLength($length) {
			// length must be positive (server side validation)
			if($length < 0 ) {
				$this->length = 0;
			} else {
				$this->length = $length;				
			} 
		}

		function setWidth( $width ) {
			// width cannot be negative (server side validation)
			if($width < 0 ) {
				$this->width = 0;
			} else {
				$this->width = $width;				
			}
		}
	
		// construct function for the class
		function __construct($length, $width) {
			$this->setLength($length);
			$this->setWidth($width);
		}

		// object function for calculating area
		function calc_area() {
			return $this->length * $this->width;
		}
	}

?>	