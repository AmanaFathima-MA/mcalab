name = input("Enter your full name: ")

words = name.split()  

for i in range(len(words)-1, -1, -1):
    print(words[i], end=" " if i != 0 else "")
