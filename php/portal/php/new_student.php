<? include('inc/header.php'); ?>
<div class="container">
	<div class="my-5">
		<div class="my-4">
			<h2>Register Student</h2>
		</div>

		<form action="<?php echo $_SERVER['PHP_SELF']; ?>">
			<div class="form-group">
				<label for="student_name">Student Name</label>
				<input type="text" name="student_name" class="form-control" placeholder="e.g. Muhammad Imran">
				<small class="form-text text-muted">Enter the Full Name of the Student</small>
			</div>

			<div class="form-group">
				<label for="student_email">Email Address</label>
				<input type="email" name="student_email" class="form-control" placeholder="e.g. m_ali@gmail.com">
				<small class="form-text text-muted">Enter an Active Email Address of the Student</small>
			</div>

			<div class="form-group">
				<label for="student_phone">Phone Number</label>
				<input type="number" name="student_phone" class="form-control" placeholder="e.g. 0336-4773249">
				<small class="form-text text-muted">Enter your current Mobile Phone Number</small>
			</div>

			<div class="form-group">
				<label for="student_course">Course Enrollment</label>
				<select class="custom-select" name="student_course">
					<!-- populate using javascript -->
					<option value="empty_select">Choose an Option ...</option>
					<option value="dummy_course_1">Dummy Course 1</option>
					<option value="dummy_course_2">Dummy Course 2</option>
					<option value="dummy_course_3">Dummy Course 3</option>
				</select>
				<small class="form-text text-muted">Select a Course for Enrollment</small>
			</div>
		</form>
	</div>
</div>
<? include('inc/footer.php'); ?>