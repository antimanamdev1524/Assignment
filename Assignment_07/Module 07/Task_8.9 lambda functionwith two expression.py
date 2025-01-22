# WAP to create a lambda function with two expressions.

calc= lambda a, b: (a+b, a*b)

a= int(input("A: "))
b= int(input("B: "))

sum, product =  calc(a, b)
print(sum)
print(product)
