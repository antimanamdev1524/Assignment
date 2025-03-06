# WAP to create a class and access its properties using an object. 


class A:
    def x(self, num_1, num_2):
        return num_1 + num_2

class B:
    def p(self):
        print("B - P")

    def q(self):
        print("B - q")

obj = A()
result= obj.x(45, 55)


obj_9= B()
obj_9.p()
obj_9.q()

print("sum is: ", result)