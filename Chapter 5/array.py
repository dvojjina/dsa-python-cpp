#Demonstates how Python protects from iterating past the end of a list

def main():
    mylist = [2, 4, 6, 8]
    for i in range(8):
        print(mylist[i])
              
main()