#Pic Charts using Matplotlib in python
# import matplotlib.pyplot as pyplot
# labels = ('Python', 'Java', 'Scala', 'C#')
# sizes = [45, 30, 15, 10]
# pyplot.pie(sizes, labels=labels , autopct='%1.f%%', counterclock=False,startangle=105)
# pyplot.show()


# import matplotlib.pyplot as pyplot
# labels = ('Python', 'Scala', 'C#', 'Java', 'PHP')
# index=(1,2,3,4,5)
# sizes = [45,10,15,30,22]

# pyplot.bar(index, sizes, tick_label = labels)
# pyplot.ylabel('Usage')
# pyplot.xlabel('Programming Languages')
# pyplot.show()

from turtle import *
state = {'turn': 0}
def spinner():
    clear()
    angle = state['turn']/10
    right(angle)
    forward(100)
    dot(120,'red')
    back(100)
    right(120)
    forward(100)
    dot(120, 'blue')
    back(100)
    right(100)
    update()

def animate():
    if state['turn']>0:
        state['turn']-=1
    spinner()
    ontimer(animate, 20)
def flick():
    state['turn']+=10
setup(420, 420, 370, 0)
hideturtle()
tracer(False)
width(20)
onkey(flick, 'space')
listen()
animate()
done
