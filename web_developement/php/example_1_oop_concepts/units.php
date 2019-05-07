<?php

	class Units {
		private $unit;

		function getUnits() {
			return $this->unit;
		}

		function setUnits($unit) {
			// convert to lowercase to make comparison easier
			$unit = strtolower($unit);

			// ensure that units are km2, m2 or cm2
			switch($unit) {
				case cm2:
				case m2:
				case km2:
					$this->unit = $unit;		
					break;

				default:
					$this->unit = "m2";	
			}
		}

		// constructor function
		function __construct($unit) {
			$this->setUnits($unit);
		}
	}

?>