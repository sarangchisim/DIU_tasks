import numpy as np

prices = np.array([15, 25, 30, 10, 45, 60, 20, 50, 35])

##Defining the price range for the sale promotion
min_price = 20
max_price = 50

##Using boolean indexing to filter products within the price range
filtered_prices = prices[(prices >= min_price) & (prices <= max_price)]
print("Filtered prices within the range $20 to $50:\n", filtered_prices)
