def solve():
  arr = [0]*26
  n , k = input().split()
  n = int(n)
  k = int(k)
  var_str = input()
  for char in var_str:
    arr[ord(char) - 97] += 1
  count = 0
  for v in arr:
    if(v%2 != 0):
      count += 1
  
 
  if(n - k <= 1):
    print("YES")
  elif(count < k):
    print("YES")
  elif(count - k <=1 and (n - k)%2 == 1):
    print("YES")
  elif(k == count):
    print("YES")
  else:
    print("NO")  
 
var_test = int(input())
for i in range(var_test):
  solve()