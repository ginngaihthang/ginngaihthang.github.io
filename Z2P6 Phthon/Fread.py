#reas file
infile=open('data.txt','r')
for line in infile:
    print(line)
infile.close

infile=open('data.txt','r')
count=0
sum =0
for line in infile:
    count+=1
    sum +=int(line)
    print(line)
mean=sum/count
print('Mean is :',mean)
infile.close()