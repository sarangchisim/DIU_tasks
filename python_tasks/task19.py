import numpy as np

data = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11])

rows, cols = 3, 4

##Checking if reshaping is possible
if data.size == rows * cols:
    reshaped_data = data.reshape(rows, cols)
    print("Reshaped 2D array:\n", reshaped_data)
else:
    print("Reshaping not possible with target shape.")
    total_elements = rows * cols
    if data.size < total_elements:
        ##Padded with zeros to match the required size
        padded_data = np.pad(data, (0, total_elements - data.size), mode='constant')
        reshaped_data = padded_data.reshape(rows, cols)
        print("\nPadded and reshaped 2D array:\n", reshaped_data)
    else:
        ##Truncating excess elements
        truncated_data = data[:total_elements]
        reshaped_data = truncated_data.reshape(rows, cols)
        print("\nTruncated and reshaped 2D array:\n", reshaped_data)
