# use of super()

class A:
    def P(self):
        print("This is P")

class B(A):  # Inheriting from A
    def Q(self):
        super().P()  # Calling P() from A
        print("This is Q")

class C(A):  # Inheriting from A
    def R(self):
        print("This is R")

class D(B, C):  # Multiple Inheritance
    def S(self):
        super().Q()  # Calls Q() from B, which also calls P() from A
        super().R()  # Calls R() from C, which also calls P() from A
        print("This is S")

# Creating an object of class D
obj = D()
obj.S()  # Calls methods from A, B, and C using super()
