def solve():
    n = int(input())
    arr = [int(x) for x in input().split()]
    low_idx = -1
    low_val = min(arr)
    #print(arr, low_val)
    for i in range(n):
        if(arr[i] == low_val):
            low_idx = i
            break
    #print("low id", low_idx)
    
    if(low_idx == n - 1):
        print(n - 1)
        return
    for i in range(low_idx + 1, n):
        if(arr[i] < arr[i - 1]):
            print(-1)
            return
    print(low_idx)
 
var_t = int(input())
for i in range(var_t):
    solve()