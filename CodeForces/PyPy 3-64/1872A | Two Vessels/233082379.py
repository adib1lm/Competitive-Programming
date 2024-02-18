def solve():
  a, b, c = input().split()
  a = int(a)
  b = int(b)
  c = int(c)
  
  val = ((a+b)*0.5 - min(a,b))
  #print(val)
  res = val//c + (val%c != 0)
 
  print(int(res))
 
var_test = int(input())
for i in range(var_test):
  solve()