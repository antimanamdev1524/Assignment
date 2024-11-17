"""Python program to get a string 
made of the first 2 and the last 2 chars from a given a string. 
If the string length is less than 2, 
return instead of the empty string."""


"""
steps:
==> input string
==> check  if original string length is less than two retun empty string
==> otherwise
    - get first two char
    - get last two char
    - merge/concate first_two and last_two char 
    - return concate result
"""

s= input("Enter string: ")                 #user input for string

if len(s) < 2:                             #check if len is less than two
    print("string is empty")               #return string is empty 

else:
    first_two_char = s[ :2: ]                  #get first two char from string
    last_two_char = s[-2: : ]                  #get last two char from string
    new_s = first_two_char +  last_two_char    #merge both first and last two char 
    print("string is: ",new_s)                #print merged string reult