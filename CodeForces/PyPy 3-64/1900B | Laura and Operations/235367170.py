def solve():
  num_digits = [int(x) for x in input().split()]
  res1 = (num_digits[1] - num_digits[2])%2 == 0
  res2 = (num_digits[0] - num_digits[2])%2 == 0
  res3 = (num_digits[0] - num_digits[1])%2 == 0
 
  print(int(res1), int(res2), int(res3))
 
var_tc = int(input())
for i in range(var_tc):
  solve()