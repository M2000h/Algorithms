###
## Start sort function
###

def binarySearch(arr, l, r, x):
    if r >= l:
        mid = l + (r - l) // 2
        if arr[mid] == x:
            return mid
        if arr[mid] > x:
            return binarySearch(arr, l, mid - 1, x)
        return binarySearch(arr, mid + 1, r, x)
    return -1


###
## End of sort function
###



###
## Exemple of usage
###

arr = []
size = int(input("n = "))

###
## Read array
###

i = 0
while i < size:
    arr.append(int(input("arr[" + str(i) + "] = ")))
    i += 1

###
## Calling a sort function
###

x = 10
result = binarySearch(arr, 0, size - 1, x);

###
## Output result
###

print()
print(result)
print()


###
##  End of exemple of usage
###
