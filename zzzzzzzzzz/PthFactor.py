n=int(input())
p=int(input())
ans=[]
for i in range (1,n+1):
    if (n%i)==0:
        ans.append(i)
if len(ans)<p:
    print(0)
else:
    print(ans[p-1])
