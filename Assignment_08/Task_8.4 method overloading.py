# WAP to show method overloading. 

class Parent:              
    def fun(self, a, b=None):
        if b is not None:
            return a+b
        else:
            return a*a
    
obj= Parent()

a= int(input("A: "))
b= input("B:(can be skip the value) ")


if b:
    print("sum is:", obj.fun(a, int(b)))

else:
    print("square of a: ", obj.fun(a))
