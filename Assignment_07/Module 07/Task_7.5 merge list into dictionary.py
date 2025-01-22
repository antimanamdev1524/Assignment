# WAP to merge two lists into one dictionary using a loop. 
l1= [1, 2, 3]
l2= ['AB', 'CD', 'EF']

d= {}

for i in range(len(l1)):
    
        d[l1[i]] = l2[i]
print(d)
