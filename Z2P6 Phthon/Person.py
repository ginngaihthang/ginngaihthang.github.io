

class Person:
    def __init__(self,name,email=None,moblie=None,office=None,private=None):
        self.name=name
        self.email=email
        self.mobile=moblie
        self.office=office
        self.private=private

    def add_email(self,email):
        self.email=email
    def add_mobile(self,mobile):
        self.mobile=mobile
    def add_office(self,office):
        self.office=office
    def add_private(self,private):
        self.private=private
    def dump(self):
        s = self.name +' \n'
        if self.email is not None:
            s +='Email : %s \n' %(self.email)
        if self.private is not None:
            s +='Private Phone: %s \n'%(self.private)
        if self.office is not None:
            s +='Office Phone: %s \n' %(self.office)
        if self.mobile is not None:
            s +='Mobile Phone: %s \n' %(self.mobile)
        print(s)
    def __str__(self):
        s = self.name +' \n'
        if self.email is not None:
            s +='Email : %s \n' %(self.email)
        if self.private is not None:
            s +='Private Phone: %s \n' %(self.private)
        if self.office is not None:
            s +='Office Phone: %s \n' %(self.office)
        if self.mobile is not None:
            s +='Mobile Phone: %s \n' %(self.mobile)
        return s

p1=Person('Aye Aye','ayeaye@gmail.com')
p1.add_mobile('09447444744')
p1.add_office('09438448428')
p1.add_private('0974247474')
p1.dump()
p2=Person('Mg Mg','mgmg@gmail.com','09484847248')
Phone_book_list=[p1,p2]
phone_book={'ayeaye':p1,'mgmg':p2}
for p in phone_book:
    print(phone_book[p])
for p in Phone_book_list:
    print(p)