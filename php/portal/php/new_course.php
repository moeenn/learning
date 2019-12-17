<? include('inc/header.php'); ?>
<div class="container">
	<div class="my-5">
		<div class="my-4">
			<h2>Create Course</h2>
		</div>
		<form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="POST">
			<div class="form-group">
				<label for="course_name">Course Name</label>
				<input type="text" name="course_name" class="form-control" placeholder="e.g. Bachelors of Science - Computer Science (BS-CS)">
				<small class="form-text text-muted">Enter the Full Name of the Course being Introduced</small>
			</div>
			<div class="my-4">
				<table class="table table-hover">
					<caption>Select Subjects for Inclusion in the Course</caption>
					<thead class="thead-dark">
						<tr>
							<th class="th-sm">Select</th>
							<th class="th-sm">Subject ID</th>
							<th class="th-sm">Subject Name</th>
							<th class="th-sm">Credit Hours</th>
						</tr>
					</thead>
					<tbody>
						<tr>
							<td><input type="checkbox" class="form-check-input mx-auto"></td>
							<td>DMY-100</td>
							<td>Dummy Subject</td>
							<td>4</td>
						</tr>
						<tr class="table-success">
							<td><input type="checkbox" class="form-check-input mx-auto" checked="checked"></td>
							<td>DMY-120</td>
							<td>Dummy Subject 2</td>
							<td>3</td>
						</tr>
					</tbody>
				</table>
			</div>

			<input type="button" class="btn btn-primary" name="create_course" value="Create Course">
		</form>
	</div>
</div>
<? include('inc/footer.php'); ?>