#!/bin/python

import matplotlib.pyplot as p
import numpy as n

z = n.linspace(0,1,1000000)
N = 1000000
omega = (4*z*(1-z))**N
p.plot(z,omega)
p.show()
