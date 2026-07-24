# Input list of items separated by spaces
items = input("Enter list items separated by space: ").split()

# Input the item to search
search_item = input("Enter item to search: ")

# Initialize count
count = 0

# Count occurrences manually
for item in items:
    if item == search_item:
        count += 1

print(f"The item '{search_item}' occurs {count} time(s) in the list.")
