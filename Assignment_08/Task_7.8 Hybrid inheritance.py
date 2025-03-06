# WAP to show hybrid inheritance. 


class A:
    def P(self):
        print("This is P")

class B(A):
    def Q(self):
        print("This is Q")

class C(B):
    def R(self):
        print("This is R")

class D(B):
    def S(self):
        print("This is S")

obj= C()
obj.P()
obj.Q()
obj.R()

obj_1= D()
obj_1.S()
