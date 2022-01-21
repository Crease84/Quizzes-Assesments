import random

print(" Enter your score")
score = int(input())

if score >= 9000:
    w = random.randrange(1,3)
    if w == 1:
        print(" GREAT JOB SUPERSTAR")
    else:
        print(" AMAZING")
elif score <= 100:
    w = random.randrange(1,3)
    if w == 1:
        print(" But youre a pro, Right?")
    else:
        print(" GET GUD")
else:
    print(" keep practicing?")
    
for x in range(10,101, 5):
    print(x)
x=12
y=0
while(y != x):
    print("BIGGIE CHEESE")
    y+=1
