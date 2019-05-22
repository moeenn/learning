x1, y1 = input("Enter coordinates of Point 1: ").split()
x2, y2 = input("Enter coordinates of Point 2: ").split()

x1 = int(x1)
y1 = int(y1)
x2 = int(x2)
y2 = int(y2)

xDistance = x2 - x1
yDistance = y2 - y1

result = ( xDistance**2 + yDistance**2 ) ** 0.5
print("Distance between points is %.2f" % result)
