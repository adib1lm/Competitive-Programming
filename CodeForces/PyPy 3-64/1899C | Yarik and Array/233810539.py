import sys
def maxSubArraySum(a, l, size):
 max_so_far = -sys.maxsize - 1
 max_ending_here = 0
 size += 1
 for i in range(l, size):
  max_ending_here = max_ending_here + a[i]
  if (max_so_far < max_ending_here):
   max_so_far = max_ending_here
 
  if max_ending_here < 0:
   max_ending_here = 0
 return max_so_far
 
def solve():
  n = int(input())
  arr = [int(x) for x in input().split()]
 
  l = 0
  r = 0
  res = max(arr)
  for i in range(n-1):
    if(arr[i]%2 == arr[i+1]%2):
      #print(l, r)
      res = max(res, maxSubArraySum(arr, l, r))
      #print(res)
      l = i+1
      r = l
    elif i == n-2:
      #print(l, n-1)
      res = max(res, maxSubArraySum(arr, l, n-1))
      #print(res)
    else:
      r = i+1
 
  print(res)
  #print(max_sub_array_sum(arr, 0, 4))
var_t = int(input())
for i in range(var_t):
  solve()