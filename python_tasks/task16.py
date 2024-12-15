import numpy as np

sales_data = np.array([
    [100, 150, 200, 250, 300],  ##Sales for product 1 over 5 months
    [120, 180, 220, 270, 320],  ##Sales for product 2 over 5 months
    [130, 170, 210, 260, 310],  ##Sales for product 3 over 5 months
    [140, 190, 230, 280, 330],  ##Sales for product 4 over 5 months
    [150, 200, 240, 290, 340],  ##Sales for product 5 over 5 months
])

##Extracting sales data for the first three products
first_three_products = sales_data[:3, :]
print("Sales data for the first three products:\n", first_three_products)

##Extracting sales data for all products in the last two months
last_two_months = sales_data[:, -2:]
print("\nSales data for all products in the last two months:\n", last_two_months)

##Extracting sales data for the 2nd product in the 4th month
specific_product_month = sales_data[1, 3]
print("\nSales data for the 2nd product in the 4th month:", specific_product_month)
