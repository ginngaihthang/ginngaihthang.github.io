# import turtle
# t = turtle.Turtle()
# s = turtle.Screen()
# s.bgcolor('#262626')
# t.pencolor("#7C909C")
# t.speed(100)
# col = ('#ED7864', '#6E544F','#592F2F','#6E382E')
# for n in range(5):
#     for x in range(8):
#         t.speed(x+10)
#         for i in range(2):
#             t.pensize(2)
#             t.circle(88+n*20,90)
#             t.lt(90)
#         t.lt(45)
#     t.pencolor(col[n%4])
# s.exitonclick()

from tkinter import *
screen = Tk()
screen.title("Tegistration Form")
screen.geometry("400x400")
screen.resizable(False,False)
Label(screen,text="Name",font="20").place(x=40,y=75)
Label(screen,text="Age",font="20",).place(x=40,y=115)
Label(screen,text="Phone",font="20").place(x=40,y=155)
Label(screen,text="Email",font="20").place(x=40,y=195)

name_entry = Entry(screen,font="10",bd=3)
name_entry.place(x=140,y=75)
age_entry= Entry(screen,font="10",bd=3)
age_entry.place(x=140,y=115)
phone_entry=Entry(screen,font="10",bd=3)
phone_entry.place(x=140,y=155)
email_entry=Entry(screen,font="10",bd=3)
email_entry.place(x=140,y=195)
Button(screen,text="Refister",font="20")
mainloop()