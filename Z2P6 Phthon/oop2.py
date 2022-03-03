class Date:
    def ger_data(self):
        return '2002-02-08'
class Time(Date):
    def get_time(self):
        return '13:16:00'

dt=Date()
print('Get Date from Date Class',dt.ger_data())

tm=Time()
print('Get Time from Time Class',tm.get_time())
print('Get date from time Class',tm.ger_data())