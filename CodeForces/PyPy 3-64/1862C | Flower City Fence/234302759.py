def solve():
  n = int(input())
  arr = [int(x) for x in input().split()]
  res = [0]*n
 
  if(n <= 1):
    if(arr[0] == 1):
      print("YES")
    else:
      print("NO")
    return
 
  for i in range(n-1, -1, -1):
    if(i == n-1):
      for j in range(arr[i]):
        if(j > n - 1):
          print("NO")
          return
        res[j] = i + 1
      continue
    if(arr[i] != arr[i+1]):
      val = arr[i]
      idx = i
      lv = arr[i+1]
 
      for j in range(lv, val):
        if(j > n - 1):
          print("NO")
          return
        res[j] = idx + 1
 
  #print(arr)  
  #print(res)
  for i in range(n):
    if(arr[i] != res[i]):
      print("NO")
      return
  
  print("YES")
 
 
 
var_t = int(input())
for i in range(var_t):
  solve()