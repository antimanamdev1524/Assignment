"""
19.	Write a Python program to find 
the first appearance of the substring 'not' and 'poor' from a given string, 
if 'not' follows the 'poor', 
replace the whole 'not'...'poor' substring with 'good'. 
Return the resulting string.
"""

s= input("Enter string thats related to 'not' and 'poor': ")

not_index = s.find('not')       #to check index number of 'not'
poor_index = s.find('poor')     # to check index number of 'poor'

print("index of not: ", not_index, "\nindex of poor", poor_index)     #print index result

if (not_index, poor_index) == -1:         #if 'not' and 'poor' sub_string is not available in user input
    print("not found")

else:                                      #if 'not' and 'poor' sub_string is available in user input

    if (not_index!= -1 and poor_index!= -1 and 'not' < 'poor'):     #if 'not' 'poor' string value is != -1 and if 'not' is less than 'poor'.... 
 
     s =  s[:not_index] + "good" + s[poor_index + len('poor'):]     #           
print(s)


"""
I am not poor in communication

s[:not_index] = I am     #means  not_index removes not from string

good

s[poor_index + len('poor'):] in communication         #means  poor_index removes string from 'poor' upto 'poor'
"""