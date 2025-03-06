import re

string= input("Enter string: ")
pattern = input("Enter word to match: ")

match= re.match(pattern, string, re.IGNORECASE)  #checks for a match at the beginning of the string

if match:
    print("String word match: ", match.group())
else:
    print("Not matching any of string words")