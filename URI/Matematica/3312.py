def fat(a):
    a = int(a)
    if a > 1:
        return a*fat(a-1)
    else:
        if(a==0):
            return 1
        return a


def primofast(b):
    b = int(b)
    divisor = int(b/2)
    while(divisor > 1):
        if(b%divisor == 0 and b != 2):
            return False
        divisor=divisor - 1
    return True


n=int(input())
numeros = input()
n = numeros.split()
for num in n:
    if(primofast(num) and num != '1'):
        print(str(num)+ '! = ' + str(fat(num)))

print()