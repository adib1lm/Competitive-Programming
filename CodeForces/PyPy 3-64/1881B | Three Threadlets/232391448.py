def solve():
  x, y, z = input().split()
  x = int(x)
  y = int(y)
  z = int(z)
  mid_val = min(x, min(y,z))
  val_arr = [x,y,z] 
 
  for i in range(3):
    for i in range(len(val_arr)):
      if(val_arr[i] > mid_val):
        val = val_arr[i]
        del val_arr[i]
        val_arr.append(mid_val)
        val_arr.append(val - mid_val)
        break
    if(ev(val_arr) == True):
      print("YES")
      break
  if(ev(val_arr) == False):
    print("NO")
 
def ev(val_arr):
  t = val_arr[0]
  for x in val_arr:
    if(x != t):
      return False
  return True
 
var_test = int(input())
for i in range(var_test):
  solve()