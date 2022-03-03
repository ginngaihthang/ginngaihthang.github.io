counter=100
miles=1000.0
name="John"
print(counter,miles,name)
print(type(counter))
print(type(miles))
print(type(name))

a=b=c=1
print(a,b,c)
a,b,c=1,2,3
print(a,b,c)

str='Hello World'
print(str)
print(str[0])
print(str[2:5])
print(str[2:])
print(str * 2)
print(str + "Testing")

#List example
list = ['abcd', 786, 2.35 , 'john' , 70.2]
tinylist = [123, 'john']
print(list)
list[0]='Yan'
print(list[-1])
print(list[1:3])
print(list[2:-1])
print(list[:-2])
print(tinylist*2)
print(list + tinylist)

#Tuple elements cannot update as List
tuple = ('abcd',780 , 2.23,'John' , 70.2)
tinytple = (123,'Yan')
print(tuple)
print(tuple[0])
print(tuple[1:4])
print(tinytple*2)
print(tuple + tinytple)

#Disctionary

dict = {'one':"This is one"}
print(dict['one'])
dict[2] = "This is two"
print(dict[2])
dict2 = {'name':"Mg Mg",'age':23,'city':'Yangon'}
print(dict2)
print(dict2['name'],dict2['age'])