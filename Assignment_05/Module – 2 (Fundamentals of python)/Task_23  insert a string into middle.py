"""Write a Python function to insert a string in the middle of a string."""

"""
steps:
==> input string 
==> input insert string
==> if striong length even than 
    - after getting string length 
    - get first half + insert string + last half
    - print result
  
"""

s= input("string: ")
insert_str= input("enter string to be inserted: ")

length= len(s)
middle_index = length//2

first_half= s[ :middle_index: ]
last_half= s[middle_index: : ]

result = first_half + insert_str + last_half
print(result)