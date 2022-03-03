sum = count= 0
num = int(input('Enter 20 : '))
list = []
i = 0
while i <num:
    num1=int(input('Enter any number: '))
    list.append(num1)
    if num1 < 0:
        print('Ignore negative number!')
        continue
    else:
        sum+=num1
        count+=1
    average=sum/count
    i+=1
print()
print('Sum is : ',sum)
print('Average is : ',average)
max = list[0]
min = list[0]
for i in range(num):
    if max < list[i]:
        max = list[i]
    if min > list[i]:
        min = list[i]
print('Maximun number: ',max)
print('Minimun number: ',min)




