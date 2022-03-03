#string manipulation
s='This is a string!'
slist=s.split()

mystring='-'.join(slist)
print(mystring)

print(slist)
result='is' in slist
print(result)
index=s.find('a')
print(index)
slen=len(s)
print(slen)
print(s[0:7])
print(s[6:])
print(s[6:-2])
newstring=s.replace('s','t')
print(newstring)
mystring=s.replace(s[:s.find(' is')],'Gucci!')
print(mystring)
print(s.find('a'))
print(s[8])

s1=" Hello Bootcpmpers!  "
print(len(s1))
s2=s1.strip()
print(s1)
print(s2)
print(s2.startswith('Hello'))
print(s2.endswith('!'))
if s2.startswith('Hello'):
    print('Starts with "Hello"')