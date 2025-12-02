import random

wbot=0
wuser=0
while(1):
    bot= random.choice(['rock','paper','scissor'])
    user=input("\nEnter your choice: ").lower()
    if bot== "rock" and user=="scissor":
        wbot += 1
        print("\n\t\t\tPoints\nyour choice:",user,"\t",wuser,"\nBot Choice:",bot,"\t",wbot)
    elif bot== "rock" and user== "paper":
        wuser += 1
        print("\n\t\t\tPoints\nyour choice:",user,"\t",wuser,"\nBot Choice:",bot,"\t",wbot)
    elif bot== "paper" and user== "scissor":
        wuser += 1
        print("\n\t\t\tPoints\nyour choice:",user,"\t",wuser,"\nBot Choice:",bot,"\t",wbot)
    elif bot== "paper" and user== "rock":
        wbot += 1
        print("\n\t\t\tPoints\nyour choice:",user,"\t",wuser,"\nBot Choice:",bot,"\t",wbot)
    elif bot== "scissor" and user== "rock":
        wuser += 1
        print("\n\t\t\tPoints\nyour choice:",user,"\t",wuser,"\nBot Choice:",bot,"\t",wbot)
    elif bot== "scissor" and user== "paper":
        wbot += 1
        print("\n\t\t\tPoints\nyour choice:",user,"\t",wuser,"\nBot Choice:",bot,"\t",wbot)
    else:
        print("\n\t\t\tPoints\nyour choice:",user,"\t",wuser,"\nBot Choice:",bot,"\t",wbot)
        continue

    if wbot == 2 or wuser ==2:
        break

if wbot==2:
    print("\n\tYou Lost 😐🫠 \nBetter luck next time😉😀")
else:
    print("You Won! 🎉🎊🥳")

