# WAP to demonstrate method overloading and method overriding.

# overiding
class Parent:        
    def fun(self):
        print("this is parent class")

class Child(Parent):
    def fun(self):
        super().fun()
        print("this is child class")

# overloading
class calc:
    def add(self, a, b= None):
        if b is not None:
            return a+b
        else:
            return a

obj= Child()
obj.fun()

obj_1= calc()
a= int(input("a: "))
b= input("b (optional): ")

if b:
    print("sum: ", obj_1.add(a, int(b)))
else:
    print("result:", obj_1.add(a))




