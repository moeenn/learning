<!--

TODO
1. Certain subjects will have pre-requisite subjects. These should be selectable
here

-->

<? include('inc/header.php'); ?>
<div class="container">
	<div class="my-5">
		<div class="my-4">
			<h2>Create Subject</h2>
		</div>
		<form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="POST">
			<div class="form-group">
				<label for="subject_id">Subject ID</label>
				<input type="text" name="subject_id" class="form-control" placeholder="e.g. CS-230" required="required">
				<small class="form-text text-muted">Enter a Unique ID for the Subject</small>
			</div>
			<div class="form-group">
				<label for="subject_name">Subject Name</label>
				<input type="text" name="subject_name" class="form-control" placeholder="e.g. Theory of Automata" required="required">
				<small class="form-text text-muted">Enter the Full Name of the Subject</small>
			</div>
			<div class="form-group">
				<label for="subject_credit_hours">Subject Credit Hours</label>
				<input type="number" max="5" min="1" name="subject_credit_hours" class="form-control" placeholder="e.g. 3" required="required">
				<small class="form-text text-muted">Enter the Total Credit Hours for the Subject</small>
			</div>
			<input type="button" name="create_subject" value="Create Subject" class="btn btn-primary">
		</form>
	</div>
</div>
<? include('inc/footer.php'); ?>