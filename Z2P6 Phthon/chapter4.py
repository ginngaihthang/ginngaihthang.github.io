#If statement False,0,None => false
var1=100
if var1:
    print('100 is True expression ')
    print(var1)
print('End')
#If else statement
var2=int(input('Enter a number: '))
if var2%2 :
    print(var2, ' is Odd')
else:
    print(var2, ' is Even')
print('Bye!')

#Nested If statement
var3=100
if var3<200:
    print(var3, ' is less than 200')
    if var3 == 150:
        print('Which is 150')
    elif var3 == 100:
        print('Which is 100')
    elif var3 == 50:
        print('Which is 50')
    elif var3<50:
        print('Which is less than 50')
else:
    print(var3,' is greather than or equal 200')
print('Bye!')
    
#Check divisor not to ve Zero
divident= int(input('Enter Divident: '))
divisor= int(input('Enter divisor: '))
#if divisor is zero or not
if divisor!= 0:
    quotient=divident/divisor
    print(divident,'/',divisor,'+',quotient)
print('End')