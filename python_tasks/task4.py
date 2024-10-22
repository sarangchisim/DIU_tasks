class Rectangle:
    def __init__(self,length,width):
        self.length = length
        self.width = width
        
    def area(self):
        print("The area is: ",self.length*self.width)
        
    def perimeter(self):
        print("The perimeter is: ",2*(self.length+self.width))
        
r1= Rectangle(4,5)
r2= Rectangle(6,7)

r1.area()
r1.perimeter()
r2.area()
r2.perimeter()  