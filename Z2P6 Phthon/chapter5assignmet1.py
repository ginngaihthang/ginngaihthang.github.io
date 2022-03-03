print('->Enter 5 numbers to find Maximum and Minimum <-')
num1=int(input('Enter frist number: '))
num2=int(input('Enter second number: '))
num3=int(input('Enter thrid number: '))
num4=int(input('Enter fouth number: '))
num5=int(input('Enter fifth number: '))
max=num1
min=num1
if max<num2:
    max=num2
if max<num3:
    max=num3
if max<num4:
    max=num4
if max<num5:
    max=num5
if min>num2:
    min=num2
if min>num3:
    min=num3
if min>num4:
    min=num4
if min>num5:
    min=num5
print('Maximun number is - ',max)
print('Minimun number is - ',min)