length=int(input('Enter tree length : '))
i = 0
while i < length:
    # for space
    j = 1
    while j < length-i:
        print(end=' ')
        j+=1
    # for *
    j = 0
    while j <= i:
        print(end='*')
        j+=1
    print()
    i+=1

i = 0
while i < length:
    j = 0
    while j <= i:
        print(end=' ')
        j+=1
    
    j = 1
    while j <length-i:
        print(end='*')
        j+=1
    print()
    i+=1