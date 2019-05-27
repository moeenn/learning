num = float(input("Enter a number: "))

if num >= 0:
	print("Number is positive")
else:
	print("Number is negative")

remainder = num % 1
if remainder == 0:
	print("Number is integer")
else:
	print("Number is float")			