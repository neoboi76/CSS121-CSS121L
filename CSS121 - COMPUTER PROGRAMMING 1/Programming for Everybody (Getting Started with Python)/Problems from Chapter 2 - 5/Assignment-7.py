largest = None
smallest = None
numList = []

while True:

    num = input("Enter a number: ")
    if num == 'done':
        break

    try:
        numInt = int(num)
        
    except:
        print('Invalid input')
        continue
    
    numList.append(numInt)
    

for i in numList:
    
    if largest is None and smallest is None:
        largest = i
        smallest = i
    if i > largest:
        largest = i
    if i < smallest:
        smallest = i

print("Maximum is", largest)
print("Minimum is", smallest)