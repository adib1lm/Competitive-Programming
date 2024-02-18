def solve():
  cur_cursor = 1
  res = 0
  var_code = input()
  for val in var_code:
    val = int(val)
    if(val == 0):
      val = 10
    res += abs(cur_cursor - val) + 1
    cur_cursor = val
  print(res)
 
var_test = int(input())
for i in range(var_test):
  solve()