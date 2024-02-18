def solve():
  n = int(input())
  arr = [int(x) for x in input().split()]
  unique = list(set(arr))
  if(n <= 2):
    print("Yes")
    return
  if(len(unique) > 2):
    print("No")
    return
  
  v_1 = -1
  v_2 = -1
 
  for val in unique:
    vv = arr.count(val)
    if(v_1==-1):
      v_1 = vv
    else:
      v_2 = vv
  
  if (v_2 == -1):
    print("Yes")
    return
  if(n%2 == 0):
    if(v_1 != v_2):
      print("No")
    else:
      print("Yes")
    return
  if(v_1-1 == v_2 or v_2 - 1 == v_1):
    print("Yes")
  else:
    print("No")
var_test = int(input())
for i in range(var_test):
  solve()