import matplotlib.pyplot as plt
import numpy as np


xi = 0
v0 = 100
yi = 0
g = 9.81
class Projectile:
    def __init__(s,theta):
        s.theta = theta
        s.T = 2 * v0 * np.sin(np.radians(s.theta)) / g
        s.t = np.arange(0,s.T,0.1)
        s.x = xi + (v0 * np.cos(np.radians(s.theta)) * s.t)
        s.y = yi + (v0 * np.sin(np.radians(s.theta)) * s.t) - ((g *  (s.t ** 2))/2)

for i  in range(0,90):
    line = Projectile(i)
    plt.plot(line.x, line.y, label = line.theta)

plt.margins(0.01)
plt.legend()
plt.show()
