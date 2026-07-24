num=int(input("enter a number"))
if num<0:
    print("enter positive number")
fact=1
i=1
while i<=num:
    fact=fact *i
    i=i+1
    
print("factorial of ",num, "is" ,fact)
  