def solve():
  n = int(input())
  arr = [int(x) for x in input().split()]
 
  if(arr[0] == 1):
    print("Yes")
    return
  print("No")
 
var_tc = int(input())
for i in range(var_tc):
  solve()