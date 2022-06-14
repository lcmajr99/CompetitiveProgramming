a=input()
b=a.find(' ')
c = a[0:b]
d = a[b + 1:].find(' ')
e = a[b + 1:d + 2 + b]
f = a[d + 2 + b:]

A=input()
B=A.find(' ')
C = A[0:B]
D = A[B + 1:].find(' ')
E = A[B + 1:D + 2 + B]
F = A[D + 2 + B:]

k=(float(e)*float(f))+(float(E)*float(F))
print("VALOR A PAGAR: R$ {0:.2f}".format(k))
