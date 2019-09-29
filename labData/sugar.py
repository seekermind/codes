import numpy as np
import matplotlib.pyplot as plt
from scipy import stats

conc = np.array([5,10,20])
angle = np.array([6.1,11.95,26.3])

slope,intercept, rvalue, nvalue, std_err = stats.linregress(conc, angle)
deg = [1]

A = np.stack([conc**d for d in deg], axis=-1)
m= np.linalg.lstsq(A,angle)[0]
plt.plot(conc, angle, 'ro',conc, m * conc, 'b-')
plt.text(0.1,0.1,stats.linregress(conc,angle))
plt.show()
