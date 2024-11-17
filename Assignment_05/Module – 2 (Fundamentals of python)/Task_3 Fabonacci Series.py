# Python program to get the Fibonacci series of given range. 

n= int(input("Enter number: "))
t1=0
t2=1
next_term=0

while next_term<=n:    #loop will be run till next term is less than n numbers
    print(next_term)
    #print next_term = 0
      
    t1= t2      
    t2= next_term      
    next_term= t1+t2
