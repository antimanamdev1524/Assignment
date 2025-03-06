# WAP to show multilevel inheritance.

class A:
    def fact(self):
        n= int(input("enter number: "))
        fact= 1
        
        for i in range (1, n+1):
            fact= fact*i

        print("Factorial is: ", fact)
    
class B(A):
    def mul(self, x, y):
        return x*y

class C(B):
    def div(self, x, y):
        return x/y
    
obj = C()
obj.fact()

x= int(input("X= "))
y= int(input("Y= "))

multiply= obj.mul(x, y)
divide= obj.div(x, y)

print("X*Y: ", multiply)
print("X/Y: ", divide)
