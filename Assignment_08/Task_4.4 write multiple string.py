# WAP to write multiple strings into a file. 
file= open("Task_3.4 open file", "a")

multi_strings= ["Hello", "\n I am a python developer", "\n currently working as backend developer", "\n thank you."]

file.writelines(multi_strings)

print("string has written successfully")
