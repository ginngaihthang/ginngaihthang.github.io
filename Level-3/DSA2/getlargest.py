a=int(input('Enter a: '))
b=int(input('Enter b: '))
c=int(input('Enter c: '))
if a > b:
    if a > c:
        print(a, 'is the largest')
    else:
        print(c, 'is the largest')
else:
    if b > c:
        print(b, 'is the largest')
    else:
        print(c, 'is the largest')