def solve():
  n, m = input().split()
  n = int(n)
  m = int(m)
  x = input()
  s = input()
 
  ev_str = x
  for i in range(25):
    ev_str += ev_str
    if(len(ev_str) > len(s)*2):
      break
  #print(ev_str)
  val_table = [0]*25
  for i in range(25):
    val_table[i] = len(x)*(1 << i)
  
  ans = -1
  for i in range(len(ev_str)):
    temp_str = ev_str[i:i+len(s)]
    #print(temp_str)
    if(temp_str == s):
      ans = ev(i+len(s), val_table)
      print(ans)
      break
  if(ans == -1):
    print(ans)
 
def ev(val, val_table):
  for i in range(25):
    if(val_table[i] >= val):
      #print(val_table)
      #print("i :" , i)
      return i
    else:
      i += 1
    
var_test = int(input())
for i in range(var_test):
  solve()