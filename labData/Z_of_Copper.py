import matplotlib.pyplot as plt
import numpy as np
from scipy import stats

#m,I,t = 
#I = float(input("value of I"))
#t = float(input("time in minute")) * 60
#m = float(input("mass))

m = np.array([0,0.15,0.4,0.65])
I = np.array([0,0.3107,0.61757,0.902857])
t = np.array([0,1860,1872,1860])
x = I * t
slope, intercept, r_value, p_value, std_err = stats.linregress(x,m)
line = x*slope + intercept
plt.plot(x,m,'ro',x,line)
plt.text(0.9,0.5,"slope: " + str(slope) + ", intercep: " + str(intercept) + ", rvalue: " + str(r_value) + ", stderr: " + str(std_err))
plt.show()
