#Arithmetic Operatot
num1 = int(input('Enter frist Number: '))
num2 = int(input('Enter Second Number: '))
num3 = num1 + num2 #add
num4 = num1 - num2 #sub
num5 = num1 * num2 #mul
num6 = num1 / num2 #div
num7 = num1 % num2 #modulus
num8 = num1 // num2 #floor division
num9 = num1 ** num2 #exponent
print(num3,num4,num5,num6,num7,num8,num9)

#Comparison Operator == , != ,<> , >= , <= , > , <
if num1==num2 :
    print('%s is equal than Num2 %s' %(num1,num2))

if num1!=num2 :
    print('%s is not equal to %s' %(num1,num2))

if num1>num2 :
    print('%s is greather than %s' %(num1,num2))

if num1<num2:
    print('%s is less than %s' %(num1,num2))

if num1>num2 :
    print('%s is greather than or equal %s' %(num1,num2))

if num1<num2:
    print('%s is less than or equal %s' %(num1,num2))

#Assignment Operator = , +=, -=, *= ,/=,%=, **= ,//=

num10 = num1 + num2
num10 += num2
num10 -= num2
num10 *= num1
print('Num 10 is %s ' %(num10))


a=60
#0011 1100
# 128 64 32 16 8 4 2 1
#1111 0000 => 128 + 64 + 32 + 16 => 240
#0000 1111 => 8 + 4 + 2 + 1 = 15
# 32 + 16 + 8 + 4 => 60
#128 64 32 16 8 4 2 1
#1284 => 1000 + 200 + 80 + 4
#   => 1*10**3 + 2* 10**2 + 8 * 10**1 + 4 * 10**0
print(a<<2)
print(a>>2)

#1001 => 9
#1100 => 12
#&1000 => 8
#^0101 => 5
#~0110 => 6
#~0011 => 3
a = 9
b =12
print(a&b)
print(a|b)
print(a^b)
print(~a)
print(~b)

#Logical Operator

if (5>9) and (2>1):
    print('ok')

print(True and False)
print(False or True)
print(not(True))
print(type(True))
print(type(False))