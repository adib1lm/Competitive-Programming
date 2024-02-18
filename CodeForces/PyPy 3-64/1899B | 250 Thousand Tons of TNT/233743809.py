import math
import sys
def getDivisors(n) : 
    i = 1
    fact = [0]*0
    while i <= math.sqrt(n): 
          
        if (n % i == 0) : 
            if (n / i == i):
              #print (i,end=" ")
              fact.append(i) 
            else :
              #print (i , int(n/i), end=" ")
              fact.append(i) 
              fact.append(int(n/i))
        i = i + 1
    return fact
 
def solve():
  n = int(input())
  arr = [int(x) for x in input().split()]
 
  sum_arr = [0]*len(arr)
  sum_arr[0] = arr[0]
  for i in range(1, n):
    sum_arr[i] = arr[i] + sum_arr[i-1]
 
  factors = getDivisors(n)
  sort_arr = arr
  sort_arr.sort()
  #print(factors)
  res = sort_arr[n-1] - sort_arr[0]
  for val in factors:
    if(val == n or val == 1):
      continue
    
    _low = sys.maxsize
    _high = -sys.maxsize
    i = 1
    while i < n:
       _val = 0
       if (i+1)%val == 0:
           _left = i - val
           _val = sum_arr[i] - sum_arr[_left]*(_left > 0)
           _low = min(_low, _val)
           _high = max(_high, _val)
       i += 1
       
    res = max(res, _high - _low)
  
  print(res)
  #print(sum_arr)
 
var_t = int(input())
for i in range(var_t):
    solve()