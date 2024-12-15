import numpy as np

data = np.array([
    [10, 20, 30],
    [40, 50, 60],
    [70, 80, 90]
])

##Creating a view of a specific row
row_view = data[1, :]
print("Original data:\n", data)
print("\nView of the 2nd row:\n", row_view)

##Creating a deep copy of a specific column (e.g., 1st column)
column_copy = data[:, 0].copy()
print("\nDeep copy of the 1st column:\n", column_copy)

##Modifying both the view and the copy
row_view[1] = 999
column_copy[0] = 888

print("\nModified view of the 2nd row:\n", row_view)
print("\nOriginal data after modifying the view:\n", data)
print("\nModified deep copy of the 1st column:\n", column_copy)
print("\nOriginal data after modifying the copy:\n", data)
