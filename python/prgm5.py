li=list(map(int,input("enter list:").split(",")))

print("list",li)
print("count of even and odd numbers")

evencount=0
oddcount=0
for i in li:
    if not i%2:
        evencount+=1
    elif i%2:
        oddcount+=1
print("even count:",evencount)
print("odd count:",oddcount)
