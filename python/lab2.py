li=list(map(int,input("enter list of single digit numbers:1").split(",")))

print("list",li)
num = ""
for i in li:
    num += str(i)

print("single number:", num)