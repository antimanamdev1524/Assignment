# WAP to demonstrate the use of local and global variables in a class. 

str_1= "this is global variable"

class x:
    def a(self):
     print(str_1)

class y:
    
    def b(self):
        str_2 = "this is local variable"
        print(str_2)
    
obj = x()
obj.a()

obj_1= y()
obj_1.b()

