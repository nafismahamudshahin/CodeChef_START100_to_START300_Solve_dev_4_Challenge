def add(a,b):
    return a+b
def sub(a,b):
    return a-b
def devision(a,b):
    return a*b
def multefy(a,b):
    return a/b
def reminder(a,b):
    return a%b
def square(a,b):
    return a**b

while(1):
    print("+ for sumation\n- for subtration\n* for devision\n/ for multify\n")
    print("^ for square\n# for reminder")
    op = str(input("Chouse Operator: "))
    print("\n")
    if(op == '+' or op == '-' or op == '*' or op == '/' or op == '#' or op == '^'):
        a = float(input("Enter the First Number: "))
        b = float(input("Enter the Second Number: "))
    else:
        print("operator not valid")
        break
    if(op == '+'):
        print("Ans: ",add(a,b))
    if(op == '-'):
        print("Ans: ",sub(a,b))
    if(op == '*'):
        print("Ans: ",devision(a,b))
    if(op == '/'):
        print("Ans: ",multefy(a,b))
    if(op == '^'):
        print("Ans: ",square(a,b))
    if(op == '#'):
        print("Ans: ",reminder(a,b))
    print("\n")