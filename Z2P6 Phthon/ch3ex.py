#Division
print('Enter two number to divide')
divident=int(input('Enter divident: '))
divisor=int(input('Enter divisor: '))
result = divident/divisor
print(divident,'/',divisor,'=',result)

#Half
value=int(input('Enter a number to split: '))
print('Half of',value ,'is',value/2)

# tempcov
# C = 5/9 * (F-32)
degreesF=float(input('Enter F Degrees: '))
#Business logic
degreesC=5/9 * (degreesF - 32)
#output
print( degreesF, 'Degrees F = ', degreesC, 'degrees C')

#timeconv

seconds = int(input('Please enter second: '))
hour = seconds//3600
seconds = seconds%3600
minutes = seconds // 60
seconds = seconds%60
print(hour,' : ',minutes,' minutes : ',seconds,' seconds')