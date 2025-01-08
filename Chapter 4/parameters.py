#demonstate the use of multiple parameters using a single func

def myfunc(n, m = None):
    if m is None:
        print("1 parameter: " + str(n))
    else:
        print("2 parameters: " + str(n), end="")

def main():
    myfunc(4)
    myfunc(5, 6)
    myfunc(100)

main()