def solve():
  n = int(input())
  bin = input()
  res = [-1]*n
 
  zero_c = 0
  curr_sum = 0
  for i in range(n-1, -1, -1):
    if(bin[i] == '0'):
      curr_sum += (n-1-zero_c) - i
      res[zero_c] = curr_sum
      zero_c += 1
  for  i in range(n):
    if (i == n-1):
      print(res[i])
    else:
      print(res[i], end = " ")
var_test = int(input())
for i in range(var_test):
  solve()