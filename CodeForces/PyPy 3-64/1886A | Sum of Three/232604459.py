def solve():
  n = int(input())
  val_1 = 1
  val_2 = 2
  val_x = n - 3
  val_2 += 2*(val_x%3 == 0)
  val_x -= 2*(val_x%3 == 0)
 
  if(val_1 == val_x or val_1 == val_2 or val_x == val_2 or val_x <= 2):
    print("NO")
  else:
    print("YES")
    print(val_1, val_2, val_x)
 
var_test = int(input())
for i in range(var_test):
  solve()