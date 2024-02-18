def getSum(n):
    sum = 0
    while (n != 0):
        sum = sum + int(n % 10)
        n = int(n/10)
    return sum
 
def solve():
  x , k = input().split()
  x = int(x)
  k = int(k)
 
  while(True):
    if(getSum(x)%k == 0):
      print(x)
      break
    else:
      x += 1
 
 
var_test = int(input())
for i in range(var_test):
  solve()