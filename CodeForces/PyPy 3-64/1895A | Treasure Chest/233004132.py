def solve():
  x, y, k = input().split()
 
  x = int(x)
  y = int(y)
  k = int(k)
 
  res = y + (abs(x-y) - k*(y>x))*(abs(x-y) - k*(y>x) >= 0)
  print(res)
 
var_test = int(input())
for i in range(var_test):
  solve()