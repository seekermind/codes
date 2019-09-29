def rvalue(x,y):
    a, b, p, q, dotProduct, p2,q2 = 0,0,[],[],0,0,0
    for i,j in zip(x,y):
        a += i
        b += j

    meanX = a / len(x)
    meanY = b / len(y)
    
    for i,j in zip(x,y):
        p += [i - meanX]
        q += [j - meanY]

    for i,j in zip(p,q):
        dotProduct += i * j
        p2 += i ** 2
        q2 += j ** 2
    
    return dotProduct / ((p2 ** 0.5) * (q2 ** 0.5))

x = [0,5,10,20]
y = [0,6.1,11.95,26.3]

print(rvalue(x,y))    