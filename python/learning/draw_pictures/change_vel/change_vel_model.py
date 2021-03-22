#!/usr/bin/python3
import numpy as np
import matplotlib.pyplot as plt

"""
    def xshow(filename, nx, nz):
    f = open(filename,"rb")
    pic = np.zeros((nx,nz))
    for i in range(nx):
        for j in range(nz):
            data = f.read(4)
            elem = struct.unpack("f",data)[0]
            pic[i][j] = elem
    f.close()
    return pic
"""
nx = 3820
nz = 1200
a = np.arange(nx*nz)
a.shape = nx,nz

