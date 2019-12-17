# Take number from user in integer variable and check whether the centeral digit is odd or even
def getInput():
	while True:
		try:
			number = input("Enter a number: ")	
			testIfNumber = int(number)	
			break
		except:
			print("Invalid Input.", end=" ")

	return number 		# return type is string

def centralDigit(number):
	length = len(number)

	if length % 2 == 1:			# if odd
		index = length // 2		# index starts as zero
		return int(number[index])
	else:
		index = [ int(length/2 -1), int(length/2) ]
		digits = [ number[index[0]], number[index[1]]] 
		digits = list(map(int, digits))
		sum = digits[0] + digits[1]
		return sum


if __name__ == "__main__":	
	number = getInput()
	central = centralDigit(number)
	print("The central digit is %d." %central, end=" ")

	if central % 2 == 0:
		print("It is an even number")
	else:
		print("It is an odd number")

"""
8
index 3 , 4 


"""