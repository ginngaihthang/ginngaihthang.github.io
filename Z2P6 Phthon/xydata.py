file=open('xy.dat','w')
file.write("""(1.3,0) (-1,2) (3,-1.5)
(0,1) (1,0) (1,1)
(0,-0.01) (100.5,-1) (2.5,-2.5)
""")
file.close()

infile=open('xy.dat','r')
lines=infile.readlines()
infile.close()
print(lines)
data=[]
for line in lines:
    words=line.split()
    for word in words:
        word=word[1:-1]
        print(word)
        x,y=word.split(',')
        mydata=(float(x),float(y))
    
        data.append(mydata)
print(data)