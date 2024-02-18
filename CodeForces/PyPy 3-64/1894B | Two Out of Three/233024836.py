def solve():
  n = int(input())
  arr = [int (x) for x in input().split()]
 
  unique_arr = list(set(arr))
 
  v_1 = -1
  v_2 = -1
  for val in unique_arr:
    if(arr.count(val) > 1):
      if(v_1 == -1):
        v_1 = val
      else:
        v_2 = val
  
  if(v_1 == -1 or v_2 == -1):
    print(-1)
    return
 
  res = [0]*n
  for i in range(n):
    if(arr[n-i-1] == v_1):
      res[n-i-1] = 2
      break
  
  for i in range(n):
    if(arr[n-i-1] == v_2):
      res[n-i-1] = 3
      break
  
  for i in range(n):
    if(res[i] == 0):
      res[i] = 1
 
  for i in range(n):
    if(i == n-1):
      print(res[i])
    else:
      print(res[i], end = " ")
var_test = int(input())
for i in range(var_test):
  solve()