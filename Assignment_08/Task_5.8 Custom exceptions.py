# WAP to print custom exceptions. 
class calc:                                                                              #class created "calc"
        
        def add(a, b):                                                                 # functions with parameter                                                 
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
                    result= calc.add(a, b)                  #function called and passed the argument
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

except FileNotFoundError as e:                      #it show when file not found
        print("file doesn't exist")

except ValueError:                                  #it display when wrong data type input
        print("enter correct numeric value")

except NegativeNumberError as e:
        print("Entered Negative numbers", e)

except InvalidChoiceError as e:
        print("Invalid choice", e)
        
except Exception as e:                              # it display when other exceptions not handle the error
        print("invalid input", e)

finally:                                            # it display when overall executions done.
        print("thank you")




    