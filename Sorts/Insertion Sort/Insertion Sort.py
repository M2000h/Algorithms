###
## Start sort function
###
def InsertionSort(arr):
    j = 2
    while j < len(arr):
        key = arr[j]
        i = j - 1
        while i >= 0 and arr[i] > key:
            arr[i + 1] = arr[i]
            i -= 1
        arr[i + 1] = key
        j += 1


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

InsertionSort(arr)

###
## Output result
###

print(arr)

###
##  End of exemple of usage
###
