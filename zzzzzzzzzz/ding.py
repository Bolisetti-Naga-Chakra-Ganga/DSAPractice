res=45
ans=str(res)+"pb8xeyzpf"
n= len(ans)
finres=""
for i in range (n):
    if ((i+1)%4==0):
        finres=finres+'_'
    else:
        finres+=ans[i]
print (finres)

