###
## Start of sort function
###
def BubleSort(arr):
    i = 0
    while i < len(arr) - 1:
        j = 0
        while j < len(arr) - i - 1:
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
            j += 1
        i += 1
    return arr
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
##  Calling a sort function
###
arr = BubleSort(arr)



###
## Output result
###

print(arr)

###
## End of exemple of usage
###
