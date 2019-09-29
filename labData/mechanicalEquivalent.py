import matplotlib.pyplot as plt
import numpy as np
from scipy import stats

#mass = np.array([94.5,103.5,197.5,212.5])
#dTheta = np.array([3.6,4.4,5.1,3.8])
#V = np.array([2,2.4,2.5,3])*3
#I = np.array([1,1.2,1.7,1.5])
#t = 300

mass = np.array([81.9,62.5,57.7])
dTheta = np.array([9,5,11.8])
V = np.array([1,0.65,1.2])*3
I = np.array([1.5,1.0,1.8])
t = 300

x = mass*dTheta
y = V*I*t

m,c,rvalue,nvalue,stdErr = stats.linregress(x,y)
line = m * x + c

plt.plot(x,y,'ro',x,line,'b-')
plt.text(250,2100,stats.linregress(x,y))
plt.show()
