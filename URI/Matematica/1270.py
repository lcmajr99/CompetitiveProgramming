def bissexto(a):
	if((a%4==0 and a%100 !=0)or(a%400==0 and a%100==0)):
		return 1
	else:
		return 0
		
def huluculu(a):
	if(a%15==0):
		return 1
	else:
		return 0

def bulukulu(a):
	if(a%55==0 and bissexto(a)):
		return 1
	else:
		return 0
i=0
while True:
	try:
		a=int(input())
		if i != 0 :
			print("")
		k=0
		x=bissexto(a)
		if(x==1):
			print("This is leap year.")
			k=1
		x=huluculu(a)
		if(x==1):
			print("This is huluculu festival year.")
			k=1
		x=bulukulu(a)
		if(x==1):
			print("This is bulukulu festival year.")
			k=1
		if(k==0):
			print("This is an ordinary year.")
		i = i + 1
	except EOFError:
		break

