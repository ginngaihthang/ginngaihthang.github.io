length =int(input('Enter tree length: '))
i = 0
while i < length:
    j = 0
    while j <= i:
        print(end='*')
        j+=1
    print()
    i+=1
'''
i = 1
while i < length:
    j = length
    while j > i:
        print(end='*')
        j-=1
    print()
    i+=1
'''
i=1
while i <length:
    j = 0
    while j < length-i:
        print(end='*')
        j+=1
    print()
    i+=1



