def solve():
  n, m = input().split()
  n = int(n)
  m = int(m)
  arr_n = [""]*n
  arr_m = [""]*m
  for i in range(n):
    arr_n[i] = input()
  
  for i in range(m):
    val = ""
    for j in range(n):
      val += arr_n[j][i]
    arr_m[i] = val
  
  test = "vika"
  idx = 0
  for val in arr_m:
    for char in val:
      if char == test[idx]:
        idx += 1
        break
    if(idx >= 4):
      print("Yes")
      return
  print("No")
 
var_t = int(input())
for i in range(var_t):
  solve()