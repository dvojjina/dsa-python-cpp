""" Python equivalent
of the CPP code: hashTable"""

def main():

    spnumbers = {"one":"uno", "two":"dos"}

    spnumbers["four"] = "cuatro"
    spnumbers["three"] = "tres"

    print("one is", end=" ")
    print(spnumbers["one"])

    print(len(spnumbers))

main()