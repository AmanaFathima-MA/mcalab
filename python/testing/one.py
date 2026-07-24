num=int(input("enter elements seperated by space: "))
list=num.split()
if(len(list))==0:
    
 print("empty list")
 
else:
    sum=0
    for x in list: 
     sum += int(x)
    print("sum:",sum)
    
   