print("Number\t Square\t Cube")
number = 0

while number <= 10:
	square = number ** 2
	cube = number ** 3
	print("%d\t %d\t %d" %(number, square, cube))
	number += 1