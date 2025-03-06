class Parent:
    s= "this is parent class"

class child(Parent):
    s_1= "this is child class"

obj= child()

print(obj.s)
print(obj.s_1)