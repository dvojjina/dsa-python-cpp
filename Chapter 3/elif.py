#demonstrates if, elif, and else statements in python

def main():
    grade = float(input("Enter your grade percentage: "))


    if (grade < 60):
        print('F')
    elif (grade < 70):
        print('D')
    elif (grade < 80):
        print('C')
    elif (grade < 90):
        print('B')
    else:
        print('A')

main()