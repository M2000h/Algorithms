###
## Start sort function
###
def QuickSort(arr, left, right):
    i = left
    j = right
    middle = arr[(left + right) // 2]
    while i <= j:
        while arr[i] < middle:
            i += 1
        while arr[j] > middle:
            j -= 1
        if i <= j:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1
            j -= 1
    if left < j:
        QuickSort(arr, left, j)
    if i < right:
        QuickSort(arr, i, right)
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

QuickSort(arr,0, size - 1)

###
## Output result
###

print(arr)

###
##  End of exemple of usage
###
