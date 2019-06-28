# no real option to define constants in python
YEN_PER_DOLLAR = 0.952
EUROS_PER_DOLLAR = 0.7175

dollars = float(input("Enter US Dollars: "))

yen = dollars * YEN_PER_DOLLAR
print("Yen: %0.2f" %yen)

euros = dollars * EUROS_PER_DOLLAR
print("Euros: %0.2f" %euros)
