li=list(map(int,input("enter list:").split(",")))

print("list",li)
item=int(input("enter item to search: "))

count=0
for i in li:
    if i==item:
        count+=1
print("item",item,"found",count,"times")