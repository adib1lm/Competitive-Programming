def solve():
    n,k = input().split()
    n = int(n)
    k = int(k)
    s = input()
    B_count = 0 
 
    for val in s:
      B_count += (val == "B")
    
    if(B_count == k):
      print(0)
      return
    
    B_count -= k
    det = ""
    print(1)
    if(k == 0):
      print(n,"A")
      return
    if(B_count > 0):
      b_c = 0
      for i in range(n-1, -1, -1):
        b_c += (s[i] == "B")
        if(b_c == k):
          print(i, "A")
          break
    else:
      B_count = -1*B_count
      a_c  = 0
      for i in range(n):
        a_c += (s[i] == "A")
        if(a_c == B_count):
          print(i+1, "B")
          break
    
var_t = int(input())
for i in range(var_t):
    solve()