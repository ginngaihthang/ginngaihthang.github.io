temps={'Osolo':13,'London':14.3}
temps['Paris']=15
print(temps['London'])
temps['Yangon']=35
temps['Mandalay']=37
print(temps)
print(sorted(temps))
if 'Osolo' in temps:
    del temps['Osolo']
else:
    print('Osolo is not in dict')
print(temps.keys())
print(temps.values())
for key in sorted(temps):
    print(key,' =>', temps[key])

t1=temps # pass by reference => memory address share
print(t1,temps)
t1['Yangon']=12
print(t1,temps)

t2=temps.copy() # pass by value
t2['Mandalay']=15
print(t2,temps)

temps1=dict()
print(type(temps))
print(type(temps1))