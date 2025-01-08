#This program is the Python version of Newtons Method

def squareroot(n):
    root = n / 2.0
    for i in range (20):
        root = 0.5 * (root + n / root)
    return root

if __name__ == "__main__":
    while True:
            user_input = input("Enter a number to find the square root or type 'exit' to quit: ")
            if user_input.lower() == "exit":
                print("Goodbye!")
                break

            try:
                 number = float(user_input) #turn the users input into a float
                 print(f"The square root of {number} is approximately {squareroot(number)}")

            except ValueError:
                 print("Invalid input, please enter a valid number")

            #break


#The while True statement will keep the program working until the break statement is executed
#If break is put in line 23 the program will not continue after the user enters an invalid input
