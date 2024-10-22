def multiplication(x):
    for y in range(1,11):
        if y == 6:
            continue
        if y == 8:
            break
        print(x," * ",y," = ",x*y )
        

a = int(input("Enter digit: "))


multiplication(a)
