values = [10,20,30,40,0]

divisor = int(input("Enter a number to divide by: "))

for i in values:
    try:
        print(i/divisor)
    except ZeroDivisionError:
        print("Cannot divide by zero")
    except ValueError:
        print("Invalid input")
    except NameError:
        print("Variable not defined")
    except IndexError:
        print("Index out of range")
    except ArithmeticError:
        print("Arithmetic error")
    except AttributeError:
        print("Attribute error")
    except:
        print("Unexpected error")
    else:
        print("No error")
    
