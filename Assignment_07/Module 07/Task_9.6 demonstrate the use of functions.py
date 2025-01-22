# WAP  to demonstrate the use of functions from the math module.

import math

def demonstrate(a, b):
    print("sin a:", math.sin(a))
    print("sqrt: ", math.sqrt(b))
    

a= int(input("a: "))
b= int(input("b: "))

a_in_radians = math.radians(a)
demonstrate(a_in_radians, b)

