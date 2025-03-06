# WAP to show single inheritance.

class A:
    def add(self, x, y):
        return x+y
    
class B(A):
    def sub(self, x, y):
        return x-y

    
obj = B()
obj.add(50, 50)
obj.sub(45, 5)
