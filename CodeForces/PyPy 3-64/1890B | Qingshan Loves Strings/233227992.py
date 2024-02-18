def solve():
  n, m = input().split()
  s = input()
  t = input()
  t_mode = -69 # 0 = 010 , 1 = 101 , -1 = cant use t
  if(len(t) > 1):
    if(len(t)%2 == 0):
      t_mode = - 1
    for i in range(1,len(t)):
      if(t[i] == t[i-1]):
        t_mode = -1
        break
    if(t_mode == -69):
      t_mode = int(t[0]) 
  else:
    t_mode = int(t)
  
  s_mode = -69 # 0 = 11 , 1 = 00, -1 = cant be done either way
  for i in range(1,len(s)):
    if(s[i] == s[i-1]):
      if(s_mode == -69 or s_mode == 1 - int(s[i])):
        s_mode = 1 - int(s[i])
      else:
        s_mode = -1
        break
    
  if(s_mode == -69):
    print("Yes")
    return
  if(s_mode == -1):
    print("No")
    return
  if(s_mode == t_mode):
    print("Yes")
    return
  print("No")
 
 
 
 
var_test = int(input())
for i in range(var_test):
  solve()