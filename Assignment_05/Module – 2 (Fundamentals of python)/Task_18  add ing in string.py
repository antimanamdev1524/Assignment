"""18.	Write a Python program to add 'ing' at the end of a given string 
(length should be at least 3). 
If the given string already ends with 'ing' then add 'ly' instead 
if the string length of the given string is less than 3, leave it unchanged.
""" 

s= input("Enter string: ")    #user input for string

"""
steps:
==> check length
==> if lenth is less or equal to 3 print string same as input
==> if string len is not less equal to 3 then apply conditions according to que.
"""

if (len(s)<=3):
            print(s)  
   
else:
          last_char= s[-3: : ]             #take last three char
          remaining_char = s[:-3: ]        #get remaining char by leftover last three char
     
          if last_char == "ing":           #if last three char is "ing"
                 remaining_char+="ly"      #add "ly" in remains car
                 print(remaining_char)

          else:
                 s+="ing"                 #if last three char is not "ing" add it into string
                 print(s)


        

