import statistics
import matplotlib.pyplot as plt

Age=[20, 54, 62, 70, 29, 30, 32, 22, 61, 52, 23, 65, 45, 34, 28, 37,46, 48,
34, 22 ]

mean = statistics.mean(Age)

hm = statistics.harmonic_mean(Age)

sd= statistics.stdev(Age)

q= statistics.quantiles(Age)

median=statistics.median(Age)

print("mean: ",mean,"\nharmonic mean: ",hm,"\nstandard deviation: ",sd,"\nquantile: ",q,"\nmedian: ",median)

plt.boxplot(Age)
plt.title("basic Age")
plt.show()
