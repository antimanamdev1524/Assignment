# WAP to check the current position of the file cursor using tell().
 
file= open("D:\Desktop\Top Tech\Backend\Se-Assigenment\Assignment_08\Task_4.6_ read_text_console.txt", "r")

print("\ncursor position before reading file: ", file.tell())
print("-----------")

print("\nread file:", file.read())
print("-----------")

print("cursor position after reading file: ", file.tell())
file.close()