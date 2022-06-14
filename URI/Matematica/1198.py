import string
while True:
  try:
    a=input()
    b=a.find(' ')
    c=a[0:b]
    d=a[b+1:]
    print(abs(int(c)-int(d)))
  except EOFError:
    break

