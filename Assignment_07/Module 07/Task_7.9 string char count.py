# WAP to count how many times each character appears in a string. 

s= "Python Developer"

char_count= {}

for i in s:
    if i in char_count:
        char_count[i]+=1
    else:
        char_count[i]= 1

print(char_count)

