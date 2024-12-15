try:
    a = {1,2,3}
    a.append(4)
    b = [5,3,4,2]
    b.append(5)
    print(a)
    print(b)
    ##print(b/'8')
    
    
except AttributeError:
    print("Attribute Error occured")
except NameError as e:
    print(e)
except ZeroDivisionError:
    print("ZeroDivisionError occured")
except IndexError:
    print("IndexError occured")
except FileNotFoundError:
    print("FileNotFoundError occured")
except FileExistsError:
    print("FileExistsError occured")
except TypeError:
    print("TypeError occured")
else:
    print("no error occured")
finally:
    print("finally block executed")

'''
try:
    a = 5
    print(a/0)

except NameError as e:
    print(e)

##custom exception

class AgeNotValidError(Exception):
    pass

try:
    age = int(input("enter your age: "))
    if age < 18:
        raise AgeNotValidError(" ")
        except AgeNotValidError as e:
    else:
        print("age")
    print(e)
except AgeNotValidError:
    print(e)
'''