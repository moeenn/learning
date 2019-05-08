My first personal project
===

I am trying to build a basic Financial General Ledger (GL) System. Hopefully it will have proper features in the future. Currently following things are working:
1. Able to grab a double entry from the user using HTML form. Following input validations are performed:
	1. Entry balance should not be zero. This is a null entry and system should return an error. This check is being performed on the front-end and back-end.
	1. Entry balance should not be negative. If user enters negative balance on debit side of the entry, the system should simply suggest that instead of debiting the account, the account should be credited, and vice versa. Either way a negative balance will not be accepted. This check is being performed on the front-end as well as the back-end.
1. Basic error handling function is defined. It needs a lot of refinement.


TODO
===
Following things need to be completed
1. create and implement a function that checks if the debit balance is equal to the credit balance
1. Looking at the setter functions for debit balance and credit balance there is some code repeated. Implement it in form a private function.