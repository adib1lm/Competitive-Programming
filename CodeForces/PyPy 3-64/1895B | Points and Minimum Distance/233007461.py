def solve():
  n = int(input())
  n *= 2
  arr = [0]*n
  arr = [int(x) for x in input().split()]
  a_x = 0
  a_y = 0
  arr.sort()
  arr_x = [0]*0
  arr_y = [0]*0
  
  arr_x.append(arr[0])
  arr_y.append(arr[n//2])
  for i in range(1,n):
    if(i <= n/2 - 1):
      a_x += (arr[i] - arr[i-1])
      arr_x.append(arr[i])
    elif(i >= n/2 + 1):
      a_y += (arr[i] - arr[i-1])
      arr_y.append(arr[i])
  
  res = a_x + a_y
  #print(arr_x)
  print(res)
  for i in range(n//2):
    print(arr_x[i],arr_y[i])
 
var_test = int(input())
for i in range(var_test):
  solve()