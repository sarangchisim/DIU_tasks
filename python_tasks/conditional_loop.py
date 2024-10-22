list1 = [1,2,3,4,5,6]

sum=0

for a in list1:
    sum = sum + a
    print(a,sum, end = ",")
    if a==4:
        break
    
print(sum)