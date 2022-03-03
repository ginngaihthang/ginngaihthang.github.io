print('Enter 4 number to vompare!')
num1=int(input('Enter frist number: '))
num2=int(input('Enter second number: '))
num3=int(input('Enter thrid number: '))
num4=int(input('Enter fourth number: '))
max=num1
if max<num2:
    max=num2
if max<num3:
    max=num3
if max<num4:
    max=num4
print('Maximum number is : ',max)