grades = [85, 78, 92, 45, 33, 67, 88, 41]

##Categorizing each student's grade
print("Grade Categories:")
for g in grades:
  if g > 80:
    print(f"Score: {g} - Grade: A")
  elif g >= 60:
    print(f"Score: {g} - Grade: B")
  elif g >= 40:
    print(f"Score: {g} - Grade: C")
  else:
    print(f"Score: {g} - Grade: F")

##Boosting grades by 5%
boosted_grades = list(map(lambda g: round(g * 1.05, 2), grades))
print("\nBoosted Grades:")
print(boosted_grades)

##Finding boosted grades above 90
above_90 = list(filter(lambda g: g > 90, boosted_grades))
print("\nBoosted Grades Above 90:")
print(above_90)