basicSalary = int(input("Enter Basic Salary (Rs.): "))

dearnessAllowRate = 0.4
dearnessAllow = basicSalary * dearnessAllowRate

rentAllowRate = 0.2
rentAllow = basicSalary * rentAllowRate

grossSalary = basicSalary + dearnessAllow + rentAllow
print("Gross salary is ", grossSalary)