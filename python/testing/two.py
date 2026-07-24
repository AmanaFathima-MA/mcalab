n = int(input("Enter number of terms: "))

if n <= 0:
    print("Please enter a positive integer.")
else:
    a = 0
    b = 1
    count = 1  
    
   
    c = 0
    
    while count <= n:
        print(a, end=' ')
        
    
        if count == n:
            c = a
        
        c = a + b
        a = b
        b = c
        count += 1
    
    print("\nThe", n, "th term is:", c)
    
