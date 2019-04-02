import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ marchaAleatoria.cpp -o marcha.x")
os.system("./macrcha.x > datos.dat")

data = np.loadtxt("datos.dat")

plt.figure()
plt.plot(data[:,0], data[:,1])
plt.savefig("datos.png")
