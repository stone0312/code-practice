#!/usr/bin/ python3 
import numpy as np
import matplotlib.pyplot as plt

x=np.arange(0,2*np.pi,0.01)

z=np.sin(x)

plt.plot(x,z)
plt.show()
