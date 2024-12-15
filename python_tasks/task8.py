class Person():
    def __init__(self, fname, lname):
        self.fname = fname
        self.lname = lname
        
    def display(self):
        print(self.fname, self.lname)
        
class Student(Person):
    def __init__(self, fname, lname, year):
        super().__init__(fname, lname)
        self.year = year
        
    def display(self):
        print(self.fname, self.lname, self.year)
        
        
print("Person: ")      
p1 = Person('Sarang', 'Chisim')
p1.display()

print("\nStudent: ")
s1 = Student('Sarang', 'Chisim', 2020)
s1.display()



## teacher class
class Teacher(Person):
    def __init__(self, fname, lname, joining_year):
        ##super().__init__(fname, lname)
        Person.__init__(self, fname, lname)
        self.joining_year = joining_year
        
    def display(self):
        print(self.fname, self.lname, self.joining_year)
        
print("\nTeacher: ")
t1 = Teacher('Sarang', 'Chisim', 1999)
t1.display()


##current class
class Current(Student):
    pass

print("\nCurrent: ")
c1 = Current('Sarang', 'Chisim', 3030)
c1.display()


##alumni class
class Alumni(Student):
    pass

print("\nAlumni: ")
##a1 = Alumni()
##a1.display()
a1 = Alumni('Sarang', 'Chisim', 4066)
a1.display()

class DIU(Student, Teacher):
    def __init__(self, varsity_name):
        self.varsity_name = varsity_name
        
    def display(self):
        print(self.varsity_name)
        
print("\nDIU: ")
d1 = DIU('DIU')
d1.display()