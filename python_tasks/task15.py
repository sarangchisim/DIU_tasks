import numpy as np

def calculate_highest_average(scores):
    student_averages = np.mean(scores, axis=1)
    
    highest_avg_index = np.argmax(student_averages)
    
    highest_avg_score = student_averages[highest_avg_index]
    
    return highest_avg_index, highest_avg_score


##test_dataset
scores = np.array([
    [85, 90, 88, 92], 
    [78, 85, 80, 89],  
    [95, 92, 94, 96],  
    [88, 84, 90, 91]   
])

student_index, highest_avg = calculate_highest_average(scores)
print(f"Student {student_index + 1} has the highest average score of {highest_avg:.2f}")
