N=int(input('請輸入N'))
#以前是用for迴圈寫，今天用「函是呼叫函式」來寫
def func(n):
  if n==1: return 1 #終止條件，像數學歸納法N=1成立
  return n*func(n-1) #函是呼叫函式，把問題，改成去問小問題
ans=func(N)
print(ans)