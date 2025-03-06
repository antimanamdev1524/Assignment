# WAP to demonstrate handling multiple exceptions. 

class calc:
        
        def add(a, b):                            
                return a+b
        def sub(a, b):
            return a-b
        def mul(a, b):
            return a*b
        def div(a, b):
            return a/b

menu= """
            press_1 for addition
            press_2 for subtract
            press_3 for multiplication
            press_4 for division     
            
            """

print(menu)

try:

    choice= int(input("Enter number between 1 to 4: "))

    a= int(input("a= "))
    b= int(input("b= "))

    if(choice==1):
                    result= calc.add(a, b)
                    print("addition is:", result )

    elif(choice==2):
                    result= calc.sub(a, b)
                    print("subtraction is: ", result)

    elif(choice==3):
                    result= calc.mul(a, b)
                    print("multiplication is: ", result)                
                
    elif(choice==4):
                    result= calc.div(a, b)
                    print("division is: ", result)

    else:
                print("please, enter correct choice!!")

except ZeroDivisionError as e:
        print("*********", e)

except ValueError:
        print("enter correct numeric value")

except Exception as e:
        print("invalid input", e)

finally:
        print("thank you")




    