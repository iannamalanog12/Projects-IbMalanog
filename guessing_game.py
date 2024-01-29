import random
"""
Name: Ib Malanog
Program: guessing_game.py

Description: This program will give the user 10 attempts to 
guess a number randomly chosen by the computer. If the user's guess 
is incorrect, a hint will be given to the user.
"""

print("You have 10 attempts to guess a random number.")

number = int(random.randint(0,100))
attempts = 0

guess = int(input("What is your guess? "))


while attempts != 9:
    if guess > number:
        print("Your guess is too high!")
        attempts = attempts + 1
        print(" ")
        guess = int(input("What is your guess? "))
    elif guess < number:
        print("Your guess is too low!")
        attempts = attempts + 1
        print(" ")
        guess = int(input("What is your guess? "))
    else: 
        print("Correct!")
        break
    if attempts == 9:
        print(" ")
        print("Maximum number of tries reached. ")
        print("The number was " + str(number))
        break
