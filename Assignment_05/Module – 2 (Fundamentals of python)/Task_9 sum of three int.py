# Program to sum of three given integers. However, if two values are equal sum will be zero. 

x= int(input("x: "))
y= int(input("y: "))
z= int(input("z: "))

if x==y and x==z and y==z:
   print("sum: 0")
else:
  sum= x+y+z
  print("sum: ", sum)
 