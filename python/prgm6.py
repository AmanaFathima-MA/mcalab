s = input("Enter strings: ").split()  
count=0
for i in s:
    if len(i)>=2 and i[0]==i[-1]:
        count+=1
print("count:",count)