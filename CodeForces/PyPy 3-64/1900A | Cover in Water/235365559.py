def solve():
  n = int(input())
  s = input()
  res = 0
  long_val = 0
  temp_val = 0
  for i in range(n):
    if(s[i] == "#"):
      long_val = max(long_val, temp_val)
      temp_val = 0
    else:
      temp_val += 1
      res += 1
  long_val = max(long_val, temp_val)
  res = res*(long_val < 3) + 2*(long_val >=3)
  print(res)
 
var_tc = int(input())
for i in range(var_tc):
  solve()