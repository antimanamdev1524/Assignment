# WAP to create a class and access its properties using an object. 


class A:
    def x(self):
        print("A - x")

    def y(self):
        print("A - y")


class B:
    def p(self):
        print("B - P")

    def q(self):
        print("B - q")

obj = A()
obj.x()
obj.y()


obj_9= B()
obj_9.p()
obj_9.q()