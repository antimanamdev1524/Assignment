# WAP to sort a list using both sort() and sorted(). 

l = [98, 67, 87, 65, 54, 56, 76, 40]

l.sort()      #sort into original list       
print("sort into ascending: ", l)


l.sort(reverse= True)
print("sort into descending: ", l)


sorted_1 = sorted(l)     #sorted into new modified list
print("sorted list: ", sorted_1)


sorted_2 = sorted(l, reverse= True)
print("sorted list by length: ", sorted_2)

