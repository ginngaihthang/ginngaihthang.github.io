class Account:
    def __init__(self,name,acc_no,initial_amount) :
        self.name=name
        self._no=acc_no
        self._balance=initial_amount

    def deposite(self,amount):
        self._balance +=amount
    def widthdraw(self,amount):
        self._balance -=amount
    def dump(self):
        s="%s , %s has balance : %s" %(self.name,self._no,self._balance)
        print(s)

a1=Account('Mg Mg','12345',300000)
a2=Account('Aye Aye','214455',120000)
a1.dump()
a2.dump()
a1.deposite(500000)
a2.deposite(100000)
a1.dump()
a2.dump()
a1.widthdraw(400000)
a2.widthdraw(50000)
a1.dump()
a2.dump()
a1.name="Mg Mg Aye"
a1.dump()
