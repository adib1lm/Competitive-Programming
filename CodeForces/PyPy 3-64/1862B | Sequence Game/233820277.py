def solve():
  n = int(input())
  arr= [int(x) for x in input().split()]
  res_arr = [0]*0
  res_arr.append(arr[0])
 
  for i in range(1,n):
    res_arr.append(arr[i])
    if(arr[i] < arr[i-1]):
      res_arr.append(arr[i])
  
  print(len(res_arr))
 
  for i in range(len(res_arr)):
    if (i == len(res_arr) - 1):
      print(res_arr[i])
    else:
      print(res_arr[i],end = " ")
 
var_t = int(input())
for i in range(var_t):
  solve()