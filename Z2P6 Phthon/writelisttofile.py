data =[
[ 0.75,        0.29619813, -0.29619813, -0.75      ],
 [ 0.29619813,  0.11697778, -0.11697778, -0.29619813],
 [-0.29619813, -0.11697778,  0.11697778,  0.29619813],
 [-0.75,       -0.29619813,  0.29619813,  0.75      ]
]

outfile=open('tmp_data.dat','w')
for list in data:
    for value in list:
        print(value)
        outfile.write('%14.8f' % value)
    outfile.write('\n')
outfile.close()
print(outfile)

outfile=open('tmp_data.dat','r')
#list=outfile.readlines()
value=outfile.readline()
#line=outfile.read()
outfile.close()

#print(list)
print(value)
#print(line)
