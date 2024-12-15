import numpy as np

branch1_sales = np.array([100, 200, 300, 400])
branch2_sales = np.array([150, 250, 350, 450])

##Joining the arrays horizontally to represent branches as columns
horizontal_join = np.column_stack((branch1_sales, branch2_sales))
print("Arrays joined horizontally (branches as columns):\n", horizontal_join)

##Joining the arrays vertically to represent branches as rows
vertical_join = np.vstack((branch1_sales, branch2_sales))
print("\nArrays joined vertically (branches as rows):\n", vertical_join)
