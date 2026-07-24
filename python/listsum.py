
num = input("Enter numbers separated by spaces: ")


list = num.split()

if len(list) == 0:
    print("List is empty")
else:
    total = 0
   
    for item in list:
        total += int(item)
    print("Sum:", total)
