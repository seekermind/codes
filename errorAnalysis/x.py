import matplotlib.pyplot as plt
import numpy as np

x = [1,2,3,5,8]
y = [0.11, 0.12, 0.13, 0.15, 0.18]

a = np.dot(x, y) / (np.linalg.norm(x) * np.linalg.norm(y))
print(a)
#plt.plot(x,y, 'ro')
#plt.show()
