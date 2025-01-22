# WAP to convert two lists into one dictionary using a for loop. 

l1= [1, 2, 3]
l2= ['TCS', 'Infosys', 'IBM']

d= {}

for i in range(len(l1)):
    d[l1[i]]= l2[i]

print(d)