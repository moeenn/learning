
<?php
	include "engine.php";

	// capture values from the form
	$debitAccount = $_POST["debitAccount"];
	$debitBalance = $_POST["debitBalance"];
	$creditAccount = $_POST["creditAccount"];
	$creditBalance = $_POST["creditBalance"];	

	// create new JournalEntry object using captured data
	$entry1 = new JournalEntry($debitAccount, $debitBalance, $creditAccount, $creditBalance);

	// let's see if everything is where it should be
	echo $entry1->get_debitAccount() . " - DR  Rs. " . $entry1->get_debitBalance() . "<br/>";
	echo $entry1->get_creditAccount() . " - CR  Rs. " . $entry1->get_creditBalance() . "<br/>";

?>