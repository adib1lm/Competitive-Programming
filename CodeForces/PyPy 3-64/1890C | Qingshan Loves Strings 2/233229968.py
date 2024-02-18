def add(str,idx):
  new_str = ""
  if(idx == len(str)):
    new_str = str + "01"
    return new_str
  if(idx < 0):
    new_str = "01" + str
    return new_str
  for i in range(len(str)):
    if(i == idx):
      new_str += "01"
    new_str += str[i]
  return new_str
def solve():
  n = int(input())
  s = input()
  if(n%2 != 0):
    print("-1")
    return
  
  op_count = 0
 
  imp_n = n
  res = [0]*0
  i = 0
  while i < (imp_n//2):
    k = len(s) - i - 1
    if(s[i] == s[k]):
      idx = -69
      if(s[i] == "1"):
        idx = i
      else:
        idx = k + 1
      op_count += 1
      s = add(s, idx)
      imp_n = len(s)
      #print("nn : ", imp_n)
      res.append(idx)
    if(op_count > 300):
      print("-1")
      return
    i += 1
  
  #print(s)
  print(op_count)
  for i in range(len(res)):
    if(i == len(res) - 1):
      print(res[i])
    else:
      print(res[i], end = " ")
  if(len(res) <= 0):
    print()
 
var_test = int(input())
for i in range(var_test):
  solve()