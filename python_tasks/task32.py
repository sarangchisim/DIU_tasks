a = float(input("Enter id-1: "))
b = float(input("Enter id-2: "))

def avg(x,y):
    result = (x+y)/2
    return result
res= avg(a,b)

print(res)

if res>10:
    print("Great")
elif res>5:
    print("good")
else: 
    print("not good enough")
    