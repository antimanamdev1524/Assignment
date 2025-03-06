# WAP to search for a word in a string using re.search(). 

import re

pattern = r"Hello"
string= "Hello world"

string= input("Enter a string: ")
word= input("enter the word to search: ")

pattern= rf"\b{word}\b"

search= re.search(pattern, word, re.IGNORECASE)  #checks for a match at the beginning of the string

if search:
    print("Word found in the string")
else:
    print("word not found.")