class AgeNotValidError(Exception):
    pass

try:
    ##age = int(input("enter your age: "))
    age = [10,33,42,72]
    for i in age:
        
        if age < 18:
            raise AgeNotValidError(" ")
            except AgeNotValidError as e:
                print(e)
        else:
            print("age")
        
except AgeNotValidError:
    print(e)
