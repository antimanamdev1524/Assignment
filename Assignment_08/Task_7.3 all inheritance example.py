# Single Inheritance  
class A:
    def a(self):
        print("this is class A of a")
    def b(self):
        print("this is class A of b")

class B(A):
    def c(self):
        print("this is class B of c")
    def d(self):
        print("this is class B of d")

obj= B()
obj.a()
obj.b()
obj.c()
obj.d()


# Multiple Inheritance  
class A:
    def a(self):
        print("This is multiple Inheritance")
    def b(self):
        print("this is class A of a & b")

class B:
    def c(self):
        print("this is class B of c")
    def d(self):
        print("this is class B of d")

class C(B, A):
    def e(self): 
        print("this is class C of e")
    def f(self):
        print("this is class C of f")

obj= C()
obj.a()
obj.b()
obj.c()
obj.d()
obj.e()
obj.f()
        

# Multilevel Inheritance
class A:
    def a(self):
        print("This is multiple Inheritance")
    def b(self):
        print("this is class A of a & b")

class B(A):
    def c(self):
        print("this is class B of c")
    def d(self):
        print("this is class B of d")

class C(B):
    def e(self): 
        print("this is class C of e")
    def f(self):
        print("this is class C of f")

obj= C()
obj.a()
obj.b()
obj.c()
obj.d()
obj.e()
obj.f()

# Hierarchical Inheritance  
class A:
    def a(self):
        print("This is multiple Inheritance")
    def b(self):
        print("this is class A of a & b")

class B(A):
    def c(self):
        print("this is class B of c")
    def d(self):
        print("this is class B of d")

class C(A):
    def e(self): 
        print("this is class C of e")
    def f(self):
        print("this is class C of f")

obj= B()
obj.a()
obj.b()
obj.c()
obj.d()

obj_1= C()
obj_1.e()
obj_1.f()

# Hybrid Inheritance  
class A:
    def a(self):
        print("This is multiple Inheritance")
    def b(self):
        print("This is class A of a & b")

class B(A):  # Inheriting from A
    def c(self):
        print("This is class B of c")
    def d(self):
        print("This is class B of d")

class C(A):  # Inheriting from A
    def e(self): 
        print("This is class C of e")
    def f(self):
        print("This is class C of f")

# Hybrid Inheritance: Class D inherits from both B and C
class D(B, C):  
    def g(self):
        print("This is class D of g")

# Creating object of Class D
obj = D()
obj.a()  
obj.b()  
obj.c() 
obj.d()  
obj.e() 
obj.f()  
obj.g()  
