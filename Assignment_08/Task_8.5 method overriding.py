# WAP to show method overriding.

class Parent:
    def fun(self):
        print("This is parent class")

class Child(Parent):
    def fun(show):
        super().fun()
        print("This is child class")

obj = Child()
obj.fun()

    


