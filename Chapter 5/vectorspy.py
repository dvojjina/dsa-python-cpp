#This program will use a list to square every number from 0 to 49

def main():
    intlist=[]
    for i in range(50):
        intlist.append(i * i)
        print(intlist[i])

main()