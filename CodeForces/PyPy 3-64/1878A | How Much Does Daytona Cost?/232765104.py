def solve():
  n , k = input().split()
  n = int(n)
  k = int (k)
 
  arr = [int(x) for x in input().split()]
  if(arr.count(k) > 0):
    print("Yes")
  else:
    print("No")
 
var_test = int(input())
for i in range(var_test):
  solve()