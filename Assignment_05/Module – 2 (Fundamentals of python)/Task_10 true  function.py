#Program that will return true if the two given integer values are equal or their sum or difference is 5. 
#function without parameter with return

def check_num():  #function (check_num) without parameter
    x= int(input("x: "))   #user input for two value
    y= int(input("y: "))

    if x==y or (x-y) == 5 or (y-x) == 5 or (x+y) == 5:  #logic to check given condition
         return True   #if yes return true
    else:
         return False  #if no return false
    
result= check_num()    #function call
print(result)           #print result