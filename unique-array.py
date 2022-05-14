n=int(input())
a=[]
b=list(map(int,input().split()))
for i in range(n):
    c=b.count(b[i])
    if(c==1):
        a.append(b[i])
for k in a:
    print(k,end=" ")
