class TAccount:
	"""
		Class attributes are as follows:
			1. accountID 		Unique serial number of account
			2. accountName 		Unique Name of the account
			3. accountHead 		There are five heads of account (Assets, Expenses, Revenue, Liabilities, Equity). 
								This determined the nature of account (i.e. Debit or Credit)
	"""
	## validator functions

	## getter functions
	def get_accountID(self):
		return self.accountID

	def get_accountName(self):
		return self.accountName

	def get_accountHead(self):
		return self.accountHead

	## setter functions
	def set_accountID(self, ID):
		self.accountID = ID

	def set_accountName(self, name):
		self.accountName = name 	# TODO. Account Name must be unique

	def set_accountHead(self, head):
		valid_heads = ("asset", "expense", "revenue", "liability", "equity")
		head = head.lower().strip()
		
		if head in valid_heads:
			self.accountHead = head
		else:
			raise Exception("Not a valid Head of Accounts")	

	## Init functions
	def __init__(self, accountID, accountName, accountHead):
		self.set_accountID(accountID)	# TODO: This shoild be assigned automatically
		self.set_accountName(accountName)
		self.set_accountHead(accountHead)


class JournalEntry:
	"""
	 The class attributes are:
	 	1. drAccount 		Debit Account
	 	2. drAmmount 		Debit Ammount
	 	3. crAccount 		Credit Account
	 	4. crAmmount 		Credit Ammount
	"""

	# getter functions
	def get_drAccount(self):
		return self.drAccount

	def get_drAmmount(self):
		return self.drAmmount

	def get_crAccount(self):
		return self.crAccount

	def get_crAmmount(self):
		return self.crAmmount	

	# setter functions
	def set_drAccount(self, account):
		if(isinstance(account, str)):
			self.drAccount = account
		else:
			raise Exception("Account name is not accurate")	

	def set_drAmmount(self, ammount):
		if ammount > 0:
			self.drAmmount = ammount
		else:
			raise Exception("Debit Ammount must be positive")

	def set_crAccount(self, account):
		if(isinstance(account, str)):
			self.crAccount = account
		else:
			raise Exception("Account name is not accurate")		

	def set_crAmmount(self, ammount):
		if ammount > 0:
			self.crAmmount = ammount
		else:
			raise Exception("Credit Ammount must be positive")

	# validator functions
	def balancedEntry(self):
		if (self.drAmmount == self.crAmmount):
			pass
		else:
			raise Exception("Debit and Credit Sides are not balanced")
			del self	# delete the faulty entry object

	# Init functions
	def __init__(self, drAccount, drAmmount, crAccount, crAmmount):
		self.set_drAccount(drAccount)
		self.set_drAmmount(drAmmount)
		self.set_crAccount(crAccount)
		self.set_crAmmount(crAmmount)
		self.balancedEntry()

if __name__ == "__main__":
	try:
		accountID = str(input("Account ID: "))
		accountName = str(input("Account Name: "))
		accountHead = str(input("Account Head: "))
		account1 = TAccount(accountID, accountName, accountHead)

		print(account1.get_accountID(), "\t\t", account1.get_accountName(), "\t\t", account1.get_accountHead())

		"""
		drAccount = input("Enter Debit Account: ").title()
		drAmmount = int(input("Enter Debit Ammount: "))
		crAccount = input("Enter Credit Account: ").title()
		crAmmount = int(input("Enter Credit Ammount: "))
		
		entry1 = JournalEntry(drAccount, drAmmount, crAccount, crAmmount)

		## for debugging
		print(entry1.get_drAccount(), "\t", entry1.get_drAmmount() )
		print(entry1.get_crAccount(), "\t", entry1.get_crAmmount() )
		"""

	except Exception as error:
		print("\nAn error occured", end=". ")
		print(error)	