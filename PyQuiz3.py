import random

def MonsterGen(biome):
    
    if biome == 'd':
        chance = random.randrange(1,101)
        if chance <= 20:
            print("OH MY GLOB, A HUSky boi joins the battle")
        elif chance <=50:
            print("God Damn, a SHPIDER")
        else:
            print("It do be a Skelly bones")
    elif biome == 'f':
        chance = random.randrange(1,101)
        if chance <= 30:
            print("Oh Geez Rick its a ZOMBIE")
        elif chance <=60:
            print("Looking like a Skelly bones")
        elif chance <= 70:
            print("A witch draws near")
        else:
            print("Its pretty peaceful here....")

HorribleWord = "SNURFLE"
x = 21
w = 3


while w != 24:
     print(w)
     w+=3

x = 0
print("How many Horribles you want?")
choice = int(input())
    
while x != choice:
    print(HorribleWord)
    x+=1



print("What biome would you like to explore?")
HA = 'a'
while HA != 'q':
    print("'f' For Plains Field or 'd' for Desert ")
    HA = input()
    if HA != 'q':
        MonsterGen(HA)

    
