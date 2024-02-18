import math 
def solve():
  n, k = input().split()
  n = int(n)
  k = int(k)
  arr = [0]*n
  arr = [int (x) for x in input().split()]
 
  
  if(k%2 != 0):
    least_div = 9999
    for i in range(n):
      val = arr[i]
      val = k - val%k
      val = val*(val!=k)
      least_div = min(val, least_div)
      #print("val : ", val)
    print(least_div)
  else:
    div_2 = 0
    div_4 = 0
    least_rem = 9999
    for i in range(n):
      div_2 += (arr[i]%2 == 0)
      div_4 += (arr[i]%4 == 0)
      least_rem = min(least_rem, (k - arr[i]%k)*(arr[i]!=k))
    #print(least_rem, div_2, div_4)
    if(k==4):
      if(div_4>= 1 or div_2 >= 2):
        print(0)
      else:
        if(least_rem<3):
          print(1)
        else:
          print(1 + 1*(div_2 == 0))
    else:
      print(1*(div_2 == 0))
    
var_test = int(input())
for i in range(var_test):
  solve()