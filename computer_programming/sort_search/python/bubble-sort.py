# get array size from user
def getArraySize():
	while True:
		try:
			array_size = int(input("Enter the size of array: "))
			return array_size
		except:
			print("Invalid Input")	


# generate an array of provided size, using random numbers
def generate_array(size):
	from random import randint 
	new_array = []
	for element in range(size):
		element = randint(0,100)
		new_array.append(element)
	return new_array


# sort the array (ascending)
def sortArray(array):
	arraySize = len(array)
	sortedArray = array

	for permutation in range(arraySize):
		for index in range(0, arraySize-1):
			if array[index] > array[index+1]:
				# flip positions
				c = sortedArray[index]
				sortedArray[index] = sortedArray[index+1]
				sortedArray[index+1] = c

	return sortedArray


if __name__ == "__main__":
	arraySize = getArraySize()
	myArray = generate_array(arraySize)
	print(myArray)
	myArray = sortArray(myArray)
	print(myArray)
