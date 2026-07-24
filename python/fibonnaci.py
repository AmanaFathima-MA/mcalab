
n = int(input("Enter number : "))


if n <= 0:
    print("Please enter a positive integer.")
else:
    a = 0
    b = 1
    count = 0

    while count < n:
        print(a, end=' ')
        c = a + b
        a = b
        b = c
        count += 1
    print("fibonnaci:",{a - b + a})  
