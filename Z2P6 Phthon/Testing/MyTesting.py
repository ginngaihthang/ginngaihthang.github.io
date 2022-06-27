import random
import time

print("******** World Game ********\n")

country = input("[Myanmar | Thailand | Loa] You can choose: ")

if country == "Myanmar":
    hero = input("\n[NyiTo | MyintNyat | LuMin ] Please hero choose: ")
elif country == "Thailand":
    hero = input("\n[KHT | GGe | BCG] please hero choose")
elif country == "loa":
    hero = input("\n[KTT | RTA | GTG] please hero choose")
else:
    print("Hero is not choose!")

blood =100

print("\nYou choose hero : " + country + " of " + hero + "\n")

time.sleep(2)

print("Strat game...\n")

while 1:
    if blood > 3:
        blood = blood - random.randint(1,10)
        print("ganna lose ememy, " + "Bloodenergy", blood,"%")
        time.sleep(1)
    else:
        print("Ememy lose....")
        print("\n You win....")
        break