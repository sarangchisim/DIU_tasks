customers = ["Alice", "Bob", "Charlie", "David", "Eve"]

##Accessing the third customer in the list
third_customer = customers[2]
print(third_customer)

##Changing the name of the second customer to "Ben"
customers[1] = "Ben"

##Adding a new customer named "Frank" to the end of the list
customers.append("Frank")

##Removing the customer "David" from the list
customers.remove("David")

##Sorting the customer names alphabetically and print the final list
customers.sort()
print(customers)