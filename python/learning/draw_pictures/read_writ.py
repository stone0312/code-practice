#!/usr/bin/python3
import numpy as np
import matplotlib.pyplot as plt

nx = 10
nz = 20
#a = np.arange(0,12)
#a = np.array([0,12],dtype=int)
a = np.zeros((nx,nz))
#print("one-di-array:",a)
#a.shape = 3,4
print("10*10-matrix:",a)
a.tofile("a.bin")

#b1 = np.fromfile("a.bin",dtype=np.float)
b2 = np.fromfile("a.bin",dtype=np.int)
#print("float-form-b1:{},\nint-form-b2:{}".format(b1,b2))
print('b2:',b2)


