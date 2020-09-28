# BankManageMentSystemInC
Bank Management system in C
The program performs following task for the bank:
    >>Deposit
    >>Withdrawl
    >>Check Account details
    >>Transaction
    >>Last operation history
    
This programs uses:
>> Functions
>> Switch Case
>> Conditional Operators


# All the variables used in this program are declared globally so that they can be accessed by the functions

#Function-1:

int list(): To show a list of operations for user to chose
        ~ Print list
        ~ Asks user for choice
        ~ stores the user choice
        ~ returns the variable
       
    
#Function-2:

void deposit(): To deposit the amount given by user to its total amount
            ~ Ask user to enter amount
            ~Add the amount to total amount
            ~ Amount += TotalAmount
            
#Function-3:

void withdraw(): When user takes out money from its total amount
            ~Ask user to enter amount
            ~Amount -= TotalAmount
            ~ If-else is used to check weather the entered amount is less than TotalAmount or not
            
#Funtion-4:

void transfer(): To transfer the amount from user's account
               ~ Ask user to enter
               ~ If-else to check weather the entered amount is less than TotalAmount or not
               ~ If(yes) => TotalAmount - Transfer
               ~ else print msg
               
 #Function-5:
 
 void checkDetail(): To give all details of all the actions performed by the user.
                 ~ Print all the variables that stores the details
                 
                 
 #Function - 6:
 
 int main(): the main function from where all the other functions will be called.
                ~ Using infinite while loop to get user input for unlimited time.
                ~ To terminate while loop we will be using predefined exit function in c >> exit()
                ~ At every case function will be called according to the number in list function
                ~ According to the function operation in case we will create new variables to store the answer of that time.
                ~ The new variable storing the add of values everytime the function is executed will be used in checDetail function to show the history of previous operation.
                
                

 

    
  
 
