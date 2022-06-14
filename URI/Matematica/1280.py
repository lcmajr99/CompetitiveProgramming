import math
def pagar(m,n):

	if(m==0):
		return n+1;
	else:
		if(n==0 and m>0):
			return pagar(m-1,1)
		else:
			if(n>0 and m>0):
				if(m==1):
					return n+m+1
				else:
					if(m==2):
						return (n*m)+3
					else:
						if(m==3):
							return (8*pow(2,n))-3
						else:
							return pagar(m-1,pagar(m,n-1))
a=int(input())
while(a):
	b=input()
	c=b[0]
	d=b[2:]
	c=int(c)
	d=int(d)
	print(pagar(c,d))
	a=a-1
