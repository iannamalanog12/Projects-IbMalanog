"""
Name: Ib Malanog
Program: palindromes.py

Description: This program asks the user for a word and determines
if the word is a palindrome (a word spelled the same forwards and
backwards).
"""

word = input("Enter a word: ")
its_a_palendrome = True 

for i in range(int(len(word) / 2)):
    if word[i] != word[len(word) - 1 - i]:
        its_a_palendrome = False 
        break
    
if its_a_palendrome:
    print("Yes, " + word + " is a palendrome!")
else:
    print("Sorry, " + word + " is not a palendrome.")
