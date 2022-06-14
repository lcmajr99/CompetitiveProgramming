import math
a=input()
b=a.find(' ')
c=a[0:b]
d=a[b+1:]
c=int(c)
d=int(d)
vol=(4*3.1415*(math.pow(c,3)))/3
print(int(d/vol))
 
