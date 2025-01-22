# WAP to create a calculator using functions.

def add(a, b):
     return a+b

def sub(a, b):
     return a-b

def mul(a, b):
     return a*b

def div(a, b):
     return a/b

def exit():
     print("Thank you!!")

while True:
    print("""
        press_1 for addition
        press_2 for subtract
        press_3 for Multiply
        press_4 for Divide      
        press_5 for exit

        """)
    choice= int(input("Enter your choice: "))

    if choice<=5:
        if choice==5:
            exit()
            break
        else:
            a= int(input("A= "))
            b= int(input("B: "))      
           
            if choice==1:
                print("result:", add(a, b))
                
            elif choice==2:
                print("result:", sub(a, b))

            elif choice==3:
                print("result:", mul(a, b))

            elif choice==4:
                print("result", div(a, b))

        print("Thank you!!")

    else:
        print("Invalid choice")

    print("Do you want to continue?")
    
    choice_0= input(" (Yes/No) ")

    if choice_0 == "No" or "no":
        print("Thank You")
        break
    elif choice_0 != "Yes" or "yes":
        print("Invalid input")
        break

        
   
                
        
        


