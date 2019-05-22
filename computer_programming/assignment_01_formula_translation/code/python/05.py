number = input("Enter a number: ")
number = int(number)
multiplier = 1

while multiplier <= 10:
	result = number * multiplier
	print("%d x %d = %d" % (number, multiplier, result))
	multiplier += 1