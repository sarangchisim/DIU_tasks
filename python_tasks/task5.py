class Shape:
    def __init__(self, name):
        self.name = name
        
    def get_name(self):
        print("The name is: ",self.name)
        
class Rectangle(Shape):
    def __init__(self, name, length, width):
        super().__init__("Rectangle")
        self.length = length
        self.width = width

    def area(self):
        print("The area is: ",self.length*self.width)
        
    def perimeter(self):
        print("The perimeter is: ",2*(self.length+self.width))
        
r1= Rectangle("b1",4,5)
r1.get_name()
r1.area()
r1.perimeter()
r2= Rectangle("b2",6,7)
r2.get_name()
r2.area()
r2.perimeter()