#1 readlines to list
infile=open('data.txt','r')
'''
list=infile.readlines()
print(list)
'''

text=infile.read()
print(text)


infile.close()