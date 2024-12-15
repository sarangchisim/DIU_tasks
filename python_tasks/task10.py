import numpy as np

score = np.array([85,90,78,92,88])

##task 1
score_float = np.array(score, dtype=float)

print(score_float)
print(type(score))
print(type(score_float))

##task 2
copy_score = score_float.copy()

copy_score+=5
print(copy_score)
print(score_float)

##task 3
print(score_float.shape)
print(score_float.ndim)
print(score_float.size)
print(score_float.itemsize)
print(score_float.dtype)
print(np.sort(score_float))
print("after sorting:")
print(score_float)

special = np.where(score_float>80)
print("\nAbove 80: ")
print(special)

##task 4

print(score_float[::2])
print(score_float[-3:-1])
print(score_float[1:4])

##task 5
print(score_float.max())
print(score_float.min())
print(score_float.std())
print(score_float.mean())
print(score_float.var())

print(score_float)
print(np.median(score_float))

