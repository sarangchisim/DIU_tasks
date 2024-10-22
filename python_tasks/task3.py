list1=[5,9,3,7,9,1]

#1
print(list1[-1])
print(list1[3])

#2
print("length: ", len(list1))
print("type: ", type(list1))

#3
list1[2] = 30
print(list1) 

#4
list1.insert(3,70)
print(list1)

#5
list1.pop(4)
print(list1)

#6
list2 = list1.copy()
print("list2: ", list2)

#7
extra = [10,20,30]
list1.extend(extra)
print("extended: ", list1)

#8
list1.sort()
print("sorted:", list1)