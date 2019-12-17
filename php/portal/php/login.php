<? include('inc/header.php'); ?>
<div class="container">
	<div class="my-5 row">
		<div class="col-6">
			<div class="my-4">
				<h2>Login</h2>
			</div>
			<form action="<?php echo $_SERVER['PHP_SELF']?>" method="POST">
				<div class="form-group">
					<label for="user_id">User ID</label>
					<input type="number" name="user_id" class="form-control" placeholder="e.g. 191210">
					<small class="form-text text-muted">Enter your User ID as mentioned on your Institute Card</small>
				</div>
				<div class="form-group">
					<label for="password">Password</label>
					<input type="password" name="password" class="form-control" minlength="12">
					<small class="form-text text-muted">Enter a Unique Password with satisfies the following criteria:
					<ul>
						<li>Minimum Length of 12 Characters</li>
						<li>Uses Alphabets, Numbers and Symbols</li>
					</ul>
					</small>
				</div>
				<input type="submit" name="login" value="Login" class="btn btn-primary">
				<div class="my-5">
					<p><small>Forgot Password? <a href="recover_account.php">Recover Account</a></small></p>
				</div>
			</form>
		</div>
	</div>
</div>
<? include('inc/footer.php'); ?>