###
## Start sort function
###

def mergeSort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        L = arr[:mid]
        R = arr[mid:]
        mergeSort(L)
        mergeSort(R)
        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1
        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1

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

mergeSort(arr)

###
## Output result
###

print(arr)

###
##  End of exemple of usage
###
