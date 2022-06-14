import string
import math
while True:
  try:
    a=input()
    b=a.find(' ')
    c=a[0:b]
    d=a[b+1:].find(' ')
    e=a[b+1:d+2+b]
    f=a[d+2+b:]
    c=int(c)
    e=int(e)
    f=int(f)
    p=e+c+f
    p=p/2
    P=p
    r1=(c*e*f)/math.sqrt((c+e+f)*(e+f-c)*(f+c-e)*(c+e-f))
    p=p*(p-c)*(p-e)*(p-f)
    p=math.sqrt(p)
    areaC=3.1415926535897*r1*r1
    r=p/P
    areaT=p
    areac=3.1415926535897*r*r
    areaTT=areaT-areac
    areaCT=areaC-areaT
    table = {'areaCT': areaCT, 'areaTT': areaTT, 'areac': areac}
    print('{areaCT:.4f} {areaTT:.4f} {areac:.4f}'.format(**table))
  except EOFError:
    break
