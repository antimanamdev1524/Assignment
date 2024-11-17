# Program to sum of the first n positive integers

def num():   #num function 
    n = int(input("Enter a positive number here: "))

    if n>0:               #if number is greter than zero 
      sum= (n*(n+1))/2    #then calculate the sum of positive number
      print("sum of the positive integers is: ", sum)
    else:   #if input is not as positive 
       print("Entered number is not positive")
   
 
num()   #calling num function