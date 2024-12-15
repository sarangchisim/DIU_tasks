def dictionary():
  """Creates a dictionary of courses, updates a course, adds a new course, removes a course, and prints the course details."""

  courses = {
      "CSE101": {"Course name": "Introduction to Programming", "Credits": 3, "Instructor": "Dr. Alice"},
      "CSE102": {"Course name": "Data Structures", "Credits": 4, "Instructor": "Dr. Bob"},
      "CSE103": {"Course name": "Database Systems", "Credits": 3, "Instructor": "Dr. Carol"}
  }

  ##Updating the instructor's name for CSE102
  courses["CSE102"]["Instructor"] = "Dr. Bob Jr."

  ##Adding a new course
  courses["CSE104"] = {"Course name": "Algorithms", "Credits": 4, "Instructor": "Dr. Dave"}

  ##Removing the course CSE101
  del courses["CSE101"]
  
  ##Storing dict keys
  a = list(courses.keys())
  b = courses.keys()
  print("a: ",a)
  print("b: ",b)
  print("\n")
  
  ##Printing the course details using loop
  for course_code, course_details in courses.items():
    print(f"Course Code: {course_code}")
    print(f"Course Name: {course_details['Course name']}")
    print(f"Credits: {course_details['Credits']}")
    print(f"Instructor: {course_details['Instructor']}")
    print()

if __name__ == "__main__":
  dictionary()
  