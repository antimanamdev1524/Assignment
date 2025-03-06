#using global variables

string = "python is awesome!"

def fun():
    print(string)

fun()


#using local variables

def fun():
    string = "python is awesome!"
    print(string)

fun()