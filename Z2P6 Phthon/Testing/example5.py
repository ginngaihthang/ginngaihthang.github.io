from cgitb import text
from tkinter import *
from tkinter import messagebox
screen= Tk()
screen.title("Registration Form")
screen.geometry("400x400")
screen.resizable(False,False)
def register():
    name=name_info.get()
    age=age_info.get()
    phone=phone_info.get()
    email=email_info.get()
    if name== "":
        messagebox.showerror("Error, Please entr your name")
    elif age =="":
        messagebox.showerror("Error, Please entr your age")
    elif phone == "":
        messagebox.showerror("Error, Please enter your phone")
    elif email=="":
        messagebox.showerror("Error, Please Enter your email")
    else:
        Label(screen,text='Refistration Successfull',font="20",fg="green").place(x=135,y=285)

    with open(name+".txt","w")as f:
        f.write("name: "+name+"\n")
        f.write("age: "+age+"\n")
        f.write("phone number: "+phone+"\n")
        f.write("email: "+email+"\n")

def clear():
    name_entry.delete(0,END)
    age_entry.delete(0,END)
    phone_entry.delete(0,END)
    email_entry.delete(0,END)
    

Label(screen, text="Registration Form",font="ariel 20 bold",bg="red",fg="white").pack(fill="both") 

Label(screen,text="Name",font="20").place(x=40,y=75)
Label(screen,text="Age",font="20").place(x=40,y=115)
Label(screen,text="Phone No.",font="20").place(x=40,y=155)
Label(screen,text="Email Id",font="20").place(x=40,y=195)
#Entry
name_info=StringVar()
age_info=StringVar()
phone_info=StringVar()
email_info=StringVar()
name_entry=Entry(screen,font="10",bd=4,textvariable=name_info)
name_entry.place(x=140,y=75)
age_entry=Entry(screen,font="10",bd=4,textvariable=age_info)
age_entry.place(x=140,y=115)
phone_entry=Entry(screen,font="10",bd=4,textvariable=phone_info)
phone_entry.place(x=140,y=155)
email_entry=Entry(screen,font="10",bd=4,textvariable=email_info)
email_entry.place(x=140,y=195)
Button(screen,text='Refister',font="20",command=register).place(x=185,y=255)
Button(screen,text='Clear',font="20",command=clear).place(x=345,y=365)
mainloop()

