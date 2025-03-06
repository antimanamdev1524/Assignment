# WAP to show hierarchical inheritance.

class A:
    def fun(self):
        print("This is fun_1")

class B(A):
    def fun_1(self):
        print("This is fun_2\n")

class C(A):
    def fun_2(self):
        print("This is fun_3")

obj= B()
obj.fun()
obj.fun_1()

obj_1= C()
obj_1.fun()
obj_1.fun_2()