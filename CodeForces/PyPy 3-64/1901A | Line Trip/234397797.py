def solve():
  n, y = input().split()
  n = int(n)
  y = int(y)
  arr = [int(x) for x in input().split()]
 
  mx = max(arr[0] , (y - arr[n-1])*(arr[n-1] <= y)*2)
  #print(mx)
  for i in range(1, n):
    if(arr[i] < y):
      mx = max(mx, (arr[i] - arr[i-1]))
    else:
      break
  print(mx)
 
var_tc = int(input())
for i in range(var_tc):
  solve()