def str(s):
    if len(s)>=2 and s[0]=='I' and s[1]=='s':
        return s
    else:
        return "Is" +s
srg=input("enter a string: ")

r=str(srg)
print(r)
