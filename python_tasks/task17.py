import numpy as np

data = np.array([
    ['25', '55000.50', '120.75'],
    ['30', '60000.25', '150.00'],
    ['22', '48000.75', '90.45'],
    ['28', '65000.00', '200.60']
])

##Converting the 'age' column (first column) to integers
ages = data[:, 0].astype(int)
print("Converted 'age' column to integers:\n", ages)

##Converting the 'salary' column (second column) to floats
salaries = data[:, 1].astype(float)
print("\nConverted 'salary' column to floats:\n", salaries)

##Converting the 'price' column (third column) to floats
prices = data[:, 2].astype(float)
print("\nConverted 'price' column to floats:\n", prices)
