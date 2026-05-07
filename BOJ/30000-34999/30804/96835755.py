# 2025년 7월 28일 16:42:13
# 틀렸습니다
# KB
# ms
n=int(input())
s=list(map(int,input().split()))
st,mx,l=0,0,0
a=[0]*10
for ed in range(n):
  if a[s[ed]]==0:l+=1
  a[s[ed]]+=1
  if l<=2:
    if ed+1-st>mx:
      mx=ed+1-st
  else:
    while l>2:
      if a[s[st]]==1:l-=1
      a[s[st]]+=1
      st+=1
print(mx)