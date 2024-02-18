def solve():
  n = int(input())
  d = [0]*n
  s = [0]*n
  
  res = 9999999999
  for i in range(n):
    d[i], s[i] = input().split()
    d[i] = int(d[i])
    s[i] = int(s[i])
    curr_time = d[i] - 1
    allow = curr_time + (s[i])//2  + (s[i]%2 != 0)
    #print(allow)
    res = min(res, allow)
 
  print(res)
var_test = int(input())
for i in range(var_test):
  solve()