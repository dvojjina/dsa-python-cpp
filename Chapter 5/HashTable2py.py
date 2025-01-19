""" Python equivalent of the CPP file: HashTable2 """

def main():
    spnumbers = {"one":"uno","two":"dos","three":"tres","four":"cuatro","five":"cinco"}

    for key in spnumbers:
        print(key, end=": ")
        print(spnumbers[key])
              
main()
