# swap two number with temp variable

a= int(input("A: "))
b= int(input("B: "))

temp= a
a= b
b= temp

print("after swapping: ")
print("A: ", a)
print("B: ", b)

print("-----------------------------")
# swap two number without using temp variable.

x= int(input("X: "))
y= int(input("Y: "))

x, y = y, x
print("after swapping: ")
print("X: ", x)
print("Y: ", y)


