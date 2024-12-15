import numpy as np

num = np.array([10,20,30])

print(num)

##type
type(num)

##1d array
array_1d = np.array([1,2,4,8,9])
print(array_1d)

##2d array
array_2d = np.array([[1,2,3],[4,5,6]])
print(array_2d)

##3d array
array_3d = np.array([[[1,2,3],[4,5,6]],[[7,8,9],[10,11,12]]])

##creating arrays from comprehensions
array_1d = np.array([x for x in range(1,11)])
array_2d = np.array([[x for x in range(1,4)] for y in range(1,4)])
array_3d = np.array([[[x for x in range(1,4)] for y in range(1,4)] for z in range(1,21,2)])
output = np.array([[x for x in range(2,21,2)] for y in range(1,11)])

print("ggboy____/n")
print(array_1d)
print(array_2d)
print(array_3d)
print("/n")


##array atributes

print(array_2d.ndim)
print(array_2d.shape)
print(array_2d.size)
print(array_2d.dtype)
print(array_2d.itemsize)
print(array_2d.data)

##numpy methods
grades = np.array([[87,96,70],[100,87,90],[94,77,90],[100,81,82]])

print(grades) #print    grades

grades.max()
grades.min()
grades.sum()
grades.std()
grades.mean()
grades.var()
grades.mean(axis=0)
grades.mean(axis=1)
grades.sort()

##shallow copies
num1 = np.arange(1,6)
print(num1)

num2 = num1.view()
print(num2)

print(id(num1))
print(id(num2))

num2[1]*=5
print(num1)
print(num2)

#deep copies
num1 = np.arange(1,6)
num2 = num1.copy()

num2[2]*=5

print(num1)
print(num2)

##reshape

array_1d = np.array([1,2,3,4,5,6,7,8,9,10,11,12])
array_2d = array_1d.reshape(6,2)
array_3d = array_1d.reshape(3,2,2)
print("\nreshaping: ")
print(array_2d)

print("\n")
print(array_3d)

reverse = array_3d.reshape(-1)
print("\nafter flattening: ")
print(reverse)


##iterating arrays
arr = np.array([1,2,3])

print("\n")
for x in arr:
    print(x)