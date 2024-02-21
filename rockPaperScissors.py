"""
-----------------------------------------------------
Name: Ib Malanog
Program: rockPaperScissors.py

Description: This program prompts the user to choose
"rock," "paper," or "scissors." It will then display
if the user has won or lost against the computer, or 
if it was a draw. 

This program is simple in nature, but I used it to 
practice the random module and nested if statements.
-----------------------------------------------------
"""
playAgain = "yes"

while playAgain == "yes":
    import random
    rps = ("rock", "paper", "scissors")
    
    #lets the computer pick a move
    comps_action = random.choice(rps)
    
    user_action = input("rock, paper, or scissors? ")
    print(" ")
    
    print("Computer said " + comps_action + ",", end=" ")
    
    if user_action == comps_action:
        print("Tie!")
    elif user_action == "rock":
        if comps_action == "paper":
            print("You lose.")
        else:
            print("You win!")
    elif user_action == "paper":
        if comps_action == "rock":
            print("You win!")
        else:
            print("You lose.")
    elif user_action == "scissors":
        if comps_action == "paper":
            print("You win!")
        else:
            print("You lose.")
    else:
        print(user_action + " is not a choice.")
        
    playAgain = input("Would you like to play again? (yes or no) ")
    print(" ")
    
print("Good game! Bye!")
