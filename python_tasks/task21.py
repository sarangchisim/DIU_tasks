import numpy as np

temperatures = np.array([18, 25, 30, 15, 12, 27, 35, 10, 20])

threshold_exceed = 28  
threshold_minimum = 15  
minimum_value = 15    

##Finding indices where the temperature exceeds the threshold
exceed_indices = np.where(temperatures > threshold_exceed)
print("Indices where temperature exceeds", threshold_exceed, ":\n", exceed_indices)

##Replacing temperatures below the threshold with the minimum value
adjusted_temperatures = np.where(temperatures < threshold_minimum, minimum_value, temperatures)
print("\nAdjusted temperatures (low values replaced with", minimum_value, "):\n", adjusted_temperatures)
