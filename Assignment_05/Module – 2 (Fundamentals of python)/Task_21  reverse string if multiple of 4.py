"""Python function to reverses a string if its length is a multiple of 4."""

"""
input string
check lenth
if len%4==0
reverse
"""

def reverse_str(s):      #function to reverse string if mulliple of 4

 if (len(s) %4 == 0):      #check if string length is multiple of 4   
     return s[: :-1]       #then reverese the string
 else:               
    return s             #otherwise remains string same           
 

s= input("enter string: ")    #user input for string

result = reverse_str(s)      #function calling for result

print("result: ",result)     #print result






