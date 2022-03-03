class Animal:
    def __init__(self,name):
        self.name=name
    def eat(self,food):
        print('%s is eating %s .' %(self.name,food))
class Dog(Animal):
    def fetch(self,thing):
        print(' %s goes after the %s .' %(self.name,thing))
    def show_affection(self):
        print('{0} wags tial'.format(self.name))

class Cat(Animal):
    def swatstring(self):
        print(' %s shreds the sting!' %(self.name))
    def show_affection(self):
        print('{0} purrs !'.format(self.name))

d = Dog('Ranger')
print(d.__dict__)
c= Cat('MeOw')
print(c.__dict__)
d.fetch('ball')
c.swatstring()
d.eat('Dag Food')
c.eat('Cat Food')
d.show_affection()
c.show_affection()
