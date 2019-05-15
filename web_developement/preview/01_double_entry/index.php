<!DOCTYPE html>
<html>
	<head>
		<title>My Website</title>
		<meta charset="UTF-8">
	</head>	

<body>
	<main>
		<!-- We Need to embed input fields inside of a table to make them manageable -->

		<form action="results.php" method="post">
			<table>
				<caption><b>Please Enter your Journal Entry</b></caption>
				<thead>
					<th></th>
					<th>Account Name</th>
					<th>Ammount</th>
				</thead>
				<tbody>
					<tr>
						<td>DR - </td>
						<td><input type="text" name="debitAccount" required="required"></td>
						<td><input type="number" name="debitBalance" min="0" step="0.01" required="required"</td>
					</tr>
					<tr>
						<td>CR - </td>
						<td><input type="text" name="creditAccount" required="required"></td>
						<td><input type="number" name="creditBalance" min="0" step="0.01" required="required"</td>
					</tr>
					<tr>
						<td><input type="submit" value="Post Entry"></td>
					</tr>	
				</tbody>
			</table>	
		</form>
	</main>
</body>
</html>