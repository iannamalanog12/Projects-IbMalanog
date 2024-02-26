"""
Name: Ib Malanog
Program: palindromes.py

Description: This program asks the user for a word and determines
if the word is a palindrome (a word spelled the same forwards and
backwards). It will then ask the user if they want to type another 
word
"""

goAgain = "yes".lower()

while goAgain == "yes": 
    word = input("Enter a word: ")
    its_a_palindrome = True 
    
    for i in range(int(len(word) / 2)):
        if word[i] != word[len(word) - 1 - i]:
            its_a_palindrome = False 
            break
        
    if its_a_palindrome:
        print("Yes, '" + word + "' is a palindrome!")
    else:
        print("Sorry, '" + word + "' is not a palindrome.")
    
    print(" ")
    goAgain = input("Would you like to enter another word? (yes or no) ").lower()
    
print("Have a good day!!")
