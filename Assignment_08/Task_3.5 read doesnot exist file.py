# WAP to create a file and write a string into it. 

file= open("Task_3.5 read create file", "w")
file.write("Hello")
file.close()


file= open("Task_3.5 read create file", "r")
print(file.read())
file.close()