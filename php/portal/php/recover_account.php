<? include('inc/header.php'); ?>
<div class="container">
	<div class="my-5 row">
		<div class="col-6">
			<div class="my-4">
				<h2>Recover Account</h2>
			</div>
			<form action="<?php echo $_SERVER['PHP_SELF']?>" method="POST">
				<div class="alert alert-primary">
					<p class="mb-0">If you have lost access to your account, please provide us your ID Number. An Email will be sent to your registered Email Address with instructions to recover your account.</p>
				</div>
				<div class="form-group">
					<label for="user_id">User ID</label>
					<input type="number" name="user_id" class="form-control">
				</div>
				<input type="submit" name="recover" value="Send Request" class="btn btn-primary">
			</form>
		</div>
	</div>
</div>
<? include('inc/footer.php'); ?>