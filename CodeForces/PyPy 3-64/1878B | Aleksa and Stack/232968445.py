def solve():
  n =int(input())
  val = 2
  for i in range(n):
    if(i == n - 1):
      print(val)
    else:
      print(val, end =" ")
      val += 3
var_test = int(input())
for i in range(var_test):
  solve()