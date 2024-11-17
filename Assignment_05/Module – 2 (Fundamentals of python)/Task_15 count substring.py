# Program to count occurrences of a substring in a string. 

string= "Top stdents of Top Technology get Top rank"
substring= "Top"
count= 0

for i in range(len(string)- len(substring)+1):   #loop for counting substring

     # Check if the substring matches the slice of the string
    if string[i: i+len(substring)] == substring:
        count+=1

print(f"The substring '{substring}' occurs {count} times in the string.")
