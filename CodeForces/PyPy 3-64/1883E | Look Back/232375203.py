def solve():
  n = int(input())
  arr = [int (x) for x in input().split()]
  bit_len = [0]*n
  init_bit = [0]*n
 
  for k in range(n):
    bit_len[k] = arr[k].bit_length() - 1
    if(k>=1):
      init_bit[k] = bit_len[k-1] - bit_len[k]
      
      if(init_bit[k] < 0):
        temp_prev_val = arr[k -1] *(1<< -1*(init_bit[k]))
        if(temp_prev_val > arr[k]):
          init_bit[k] += 1
 
      if(init_bit[k] >= 0):
        temp_val = arr[k] * (1 << init_bit[k])
        if(arr[k-1] > temp_val):
          init_bit[k] += 1
      
  res_bit = [0]*n
  res = 0
  for i in range(1, n):
    bit_change = res_bit[i-1] + init_bit[i]
    if(bit_change >=0):
      res_bit[i] = bit_change
      res+= bit_change
  print (res)
  #print("res bit: ", res_bit)
  #print("init_bit", init_bit)
 
var_test = int(input())
for i in range(var_test):
  solve()