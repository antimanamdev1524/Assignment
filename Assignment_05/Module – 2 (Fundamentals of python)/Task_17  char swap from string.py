# get a single string from two given strings, separated by a space and swap the first two characters of each string.

s1= input("s1: ")
s2= input("s2: ")

"""
steps:
by slicing get first two char 
by slicing get remaining char
swap with remaining char as s1 slicing char with s4 remaining char
s2 slicing char with s3 remaining char

"""

#get first two char by slicing
s1_slicing= s1[:2: ]    
s2_slicing= s2[:2:]     

#get remaing char after slicing
s3_remaining = s1[2: : ] 
s4_remaining = s2[2: : ]

#swap slicing char with remaining char and merge it to make a new string
merge = s2_slicing+s3_remaining, s1_slicing + s4_remaining, 
print(merge)