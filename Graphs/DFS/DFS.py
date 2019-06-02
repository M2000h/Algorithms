vec = [[]]*100
Mark = [False] * 100
Way = [None]*100
finish = 0


###
## Start of DFS function
###
def DFS(v, from_, size, deep):
    Mark[v] = True
    Way[deep] = v
    if v == finish:
        i = 0
        while i < deep:
            print(str(Way[i]) + "-->", end='')
            i += 1
        print(Way[deep])
        return
    i = 0
    while i <= size:
        if Mark[i] == False and i in vec[v]:
            DFS(i, v, size, deep+1)
        i += 1
###
## End of DFS function
###

# 5 4
# 1 2
# 2 3
# 4 5
# 5 4
# 3 5

s = input().split()
size = int(s[0])
finish = int(s[1])
i = 0
while i < size:
    s = input().split()
    a = int(s[0])
    b = int(s[1])
    vec[a].append(b)
    i += 1

Mark[1] = 1
DFS(1, 1, size, 0)
