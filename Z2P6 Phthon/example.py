
import sys
sum=0
while True:
    num=int(input('Enter number (9999 to exist): '))
    if num==999:
        sys.exit(0)
    sum+=num
    print('Sum is : ',sum)