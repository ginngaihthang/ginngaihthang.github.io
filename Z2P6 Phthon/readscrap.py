infile=open('Oxford.dat','r')
odata=infile.readline().split('\\r\\n')
#print(odata[0],odata[1])
city=odata[0][2:]
print(city)
location=odata[1]
print(location)
temp_data=odata[7:]
#print(temp_data)
data={}
data['place']=city
data['location']=location
data['data']={}
for line in temp_data:
    columns=line.split()
    #print(columns)
    year=columns[0]
    month=columns[1]
    if columns[-1]=='Provisional' or columns[-1]=="Provisional'":
        del columns[-1]
    for i in range(2,len(columns)):
        if columns[i]=='---':
            columns[i]=None
        elif columns[i][-1]=="*" or columns[i][-1]=='#':
            columns[i]=float(columns[i][:-1])
        else:
            columns[i]=float(columns[i])
    tmax,tmin,air_frost,rain,sun=columns[2:]
    #print(tmax,tmin,air_frost,rain,sun)
    if not year in data['data']:
        print(year)
        data['data'][year]={}
    data['data'][year][month]={'tmin':tmin,'tmax':tmax,'air_frost':air_frost,'rain':rain,'sun':sun}
#print(data['data']['2008']['12'])
for key in data['data']['2008']:
    print(key,'=>',data['data']['2008'][key])

