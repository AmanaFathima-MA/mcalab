# Input list of strings separated by space
strings = input("Enter strings separated by space: ").split()

count = 0
for s in strings:
    if len(s) >= 2 and s[0] == s[-1]:
        count += 1

print("Number of strings meeting the condition:", count)
