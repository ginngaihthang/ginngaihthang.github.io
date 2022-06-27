from turtle import * 
speed(0)
goto(-250,-250)

color('green')
begin_fill()
for i in range(4):
    forward(500)
    left(90)
end_fill()
goto(-5,0)
right(90)


color('yellow')
width(1)
for i in range(100):
    circle((100-5*i)*((-1)**i))
    right(90)






















