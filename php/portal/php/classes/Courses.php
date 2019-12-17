<?php

	class Course {
		private $id;
		private $name;
		private static $subject_ids;

		public function __construct($name, $subjects) {
			$this->name = $name;
			$this->subjects = $subjects;
		}
	}


?>