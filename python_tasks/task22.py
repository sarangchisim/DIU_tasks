import numpy as np

scores = np.array([85, 90, 75, 88, 92, 60, 79, 95, 70])

##Searching for specific scores and returning their indices
search_scores = [75, 90]
indices = [np.where(scores == score)[0][0] if score in scores else -1 for score in search_scores]
print("Indices of scores", search_scores, ":\n", indices)

##Sorting the array in ascending order
sorted_ascending = np.sort(scores)
print("\nScores sorted in ascending order:\n", sorted_ascending)

##Sorting the array in descending order
sorted_descending = np.sort(scores)[::-1]  
print("\nScores sorted in descending order:\n", sorted_descending)
