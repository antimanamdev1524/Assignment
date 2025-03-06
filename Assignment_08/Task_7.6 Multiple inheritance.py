# WAP to show multiple inheritance.

class A: 
    def prime(self):             
        n= int(input("Enter number: "))
        prime= 0

        for i in range(1, n+1):
            
            if(n%i==0):
                prime+=1

        if (prime==2):
         print(n, "is prime\n")

        else:
            print(n, "is not prime\n")
    
class B:
   def fact(self):
        n= int(input("enter number: "))
        fact= 1
        
        for i in range (1, n+1):
            fact= fact*i

        print("Factorial is: ", fact)

class C(A, B):  
    def pattern(self):
        print("\n star pattern:")
        for i in range(1, 6):
         print(" "*(6-i), "*"*i)
    
obj = C()
obj.prime()
obj.fact()
obj.pattern()