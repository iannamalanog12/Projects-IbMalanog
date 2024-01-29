"""
Name: Ib Malanog
Program: synthetic_division.py

Description: This program prompts the user for the degree of the polynomial 
dividend, each coefficient in the dividend, and the divisor. Consequently, 
the program will output the quotient with the remainder.
"""

def sign(n, first):
    if n > 0:
        return("+")
    elif n ==0:
        return("")
    else:
        return("-")

def build_message(n):
    if n==1:
        msg = "Enter the coefficient of the x term: "
    elif n==0:
        msg = "Enter the coefficient of the constant term:"
    else:
        msg = "Enter the coefficient of the x^"+ str(n) +" term: "
    return msg

def do_another_synthetic_division():
    do_another = input("Would you like to continue (yes/no)? ").lower()
    while do_another != "yes" and do_another != "no":
        do_another = input("Would you like to continue (yes/no)? ").lower()

    return do_another=="yes"
    
# Reads in the coefficients and builds the list to return
def read_in_coefficients(degree):
    coefficients = []
    for n in range(degree, -1, -1):
        next_term_msg = build_message(n)
        coefficients.append(int(input(next_term_msg)))
    return coefficients
    
# Performs synthetic division and returns the quotient
def synthetic_division(coefficients, divisor):
    quotient = [] 
    quotient.append(coefficients[0]) 
    for i in range(len(coefficients) -1):
        quotient.append(divisor * quotient[i] + coefficients[i + 1])
    print("The quotients are: " + str(quotient))
    return quotient

def sign(x, first):
    
    return("")    

    
def build_dividend(dividend):
 
    return build_answer(dividend, False)

def build_divisor(a):
    return "x - " + str(a)

def build_answer(quotient, degree):
    msg = " "
    exponent = degree - 1
    for i in range(len(quotient) - 1):
        msg += str(quotient[i]) + "x^" + str(exponent) + "+"
        exponent -= 1
    return msg

def build_remainder(quotient):
    msg = " "
    msg += str(quotient[-1]) + "/(x-" + str(divisor_a) + ")"
    return msg
    
#  Main Program
while(1):
    dividend = []
    quotient = []

    degree = 0
    while degree<1:
        degree = int(input("Enter the degree of the dividend (degree > 0): "))
        
    divisor_a = int(input("Enter the value of a for the divisor x - a: "))
    dividend  = read_in_coefficients(degree)
    quotient  = synthetic_division(dividend, divisor_a)
    print("The Divisor is:  " + str(build_divisor(divisor_a)))
    
    print("The Answer is: ", end=" ")
    print(str(build_answer(quotient, degree)) + str(build_remainder(quotient)))
   
    
    if not do_another_synthetic_division():
        break

print("\nThank you for using this program!  Bye\n")
