count = sum = 0
print('Enter 5 number !')
while count<5:
    val = float(input('Enter number: '))
    if val<0:
        print('Unacceptable! Terminating --- !')
        break
    count +=1
    sum +=val
else:
    print('Average = ',sum/count)