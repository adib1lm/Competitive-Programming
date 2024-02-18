import math
def primeFactors(n):
    while n % 2 == 0:
        return 2
        n = n / 2
    for i in range(3, int(math.sqrt(n))+1, 2):
        while n % i == 0:
            if(i > 1):
              return i
            n = n / i
    if n > 2:
        return n
 
def solve():
  l, r = input().split()
  l = int(l)
  r = int(r)
 
  if(r<=3):
    print(-1)
    return
  if(l%2 == 0 and l > 2):
    print(2,l-2)
    return
  if(r%2 == 0):
    print(2, r-2)
    return
  if(r-l>1):
    print(2, r - 3)
  else:
    val = primeFactors(l)
    if(val == l):
      print(-1)
    else:
      print(val, l - val)
 
var_test = int(input())
for i in range(var_test):
  solve()