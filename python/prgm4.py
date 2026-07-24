li=list(map(int,input("enter list of single digit numbers:").split(",")))

print("list",li)
print("even numbers")
for i in li:
    if i==237:
        break
    if not i%2:
        print(i)
   