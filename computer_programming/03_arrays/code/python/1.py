if __name__ == "__main__":	
	while True:
		try:
			number = input("Enter Number: ")
			digits = len(number)
			isDigit = int(number)
			print("The number is %s and it has %d digits." %(number, digits))
			break
		except:
			print("Invalid Input.", end=" ")