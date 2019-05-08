<!--
	This is meant as an attempt to see if I can design a viable double entry system.
	Following features should be present
	1. Ability to take double entry from user through html form
	2. Validate the entry:
		a. No negative amounts in journal entry
		b. No zero values in journal entry
		c. Debit and Credit side should balance


	TODO:
	1. Create and implement a function for validating balance entry
	2. Create and implement a function for checking is debit side is equal to credit side	
-->	

<?php

	include "error.php";

	class JournalEntry {
		private $debitAccount;
		private $debitBalance;
		private $creditAccount;
		private $creditBalance;

		// getter functions
		function get_debitAccount() {
			return $this->debitAccount;
		}

		function get_debitBalance() {
			return $this->debitBalance;
		}

		function get_creditAccount() {
			return $this->creditAccount;
		}

		function get_creditBalance() {
			return $this->creditBalance;
		}

		// setter functions
		function set_debitAccount($drAccount) {
			// TODO: Check if the ledger account exists
			$this->debitAccount = $drAccount;
		}

		function set_debitBalance($drBalance) {
			if ($drBalance == 0) {
				echo error("Null entry is not allowed!");
			} elseif ($drBalance < 0) {
				echo error("Negative Ammounts are not allowed");
			} else {
				$this->debitBalance = $drBalance;
			}
		}

		function set_creditAccount($crAccount) {
			// TODO: Check if the ledger account exists
			$this->creditAccount = $crAccount;			
		}

		function set_creditBalance($crBalance) {
			if ($crBalance == 0) {
				echo error("Null entry is not allowed!");
			} elseif ($crBalance < 0) {
				echo error("Negative Ammounts are not allowed");
			} else {
				$this->creditBalance = $crBalance;
			}			
		}

		// construct function using setter functions
		function __construct( $drAccount, $drBalance, $crAccount, $crBalance) {
			$this->set_debitAccount($drAccount);
			$this->set_debitBalance($drBalance);
			$this->set_creditAccount($crAccount);
			$this->set_creditBalance($crBalance);
		}

	}

?>

