class Shape:
    def __init__(self, name):
        self._name=name

    def get_name(self):
        print("The name is: ",self._name)
        
    def __display_shape_type(self):
        print(self._name)
        
    def display_shape_info(self):
        self.__display_shape_type()
        

class Rectangle(Shape):
    def __init__(self, length, width):
        self.__length = length
        self.__width = width
    
    def get_length(self):
        print("The length is: ",self.__length)
        
    def get_width(self):
        print("The width is: ",self.__width)
        

o1=Rectangle( 11, 22)
##o1.display_shape_info() 
o1.get_length()
o1.get_width()
o2=Rectangle( 100, 200)
##o2.display_shape_info()
o2.get_length()
o2.get_width()


        