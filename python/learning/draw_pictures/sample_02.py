#!/usr/bin/env python3

import matplotlib.pyplot as plt
import numpy as np
# 创建数据
dt = 0.001
t = np.arange(0.0, 10.0, dt)
print(t)
r = np.exp(-t[:1000] / 0.05)  # impulse response
x = np.random.randn(len(t))
s = np.convolve(x, r)[:len(x)] * dt  # colored noise

# 默认主轴图axes是subplot(111)
plt.plot(t, s)
plt.axis([0, 1, 1.1 * np.amin(s), 2 * np.amax(s)])
plt.xlabel('time (s)')
plt.ylabel('current (nA)')
plt.title('Gaussian colored noise')

# 内嵌图
#            [left, bottom, width, height]    in (0,1)
a = plt.axes([.65, .6, .2, .2], facecolor='y')
# n, bins, patches = plt.hist(s, 400, normed=1)
n, bins, patches = plt.hist(s, 400)
plt.title('Probability')
plt.xticks([])
plt.yticks([])

# 另外一个内嵌图
#            [left, bottom, width, height]    in (0,1)
a = plt.axes([0.2, 0.6, .2, .2], facecolor='y')

plt.plot(t[:len(r)], r)
plt.title('Impulse response')
plt.xlim(0, 0.2)
plt.xticks([])
plt.yticks([])
plt.show()



