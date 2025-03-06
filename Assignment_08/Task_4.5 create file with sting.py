# WAP to create a file and print the string into the file. 

file= open("Task_4.5_create_file.py", "w")


num_char = file.write("this is string")
file.close()

print(num_char)
