#Take a stream of userdefined binary bits.Divide it into frames of some default width.Store it in a dictionary.Perform bitwise EX-OR between frames.
#Method 1
n=int(input("enter the number of bits:"))
inp=input("enter input :")
#zero padding
while n!=8:
    inp='0'+inp
    n+=1
#splitting in frames
frame={1:inp[:4],2:inp[4:]}
print("frame",frame)
#xor
oup=""
for i in range(4):
    if(inp[:4][i]==inp[4:][i]):
        oup=oup+'0'
    else:
        oup=oup+'1'
print(oup)

#Method 2
'''s=int(input("enter the lenght of the frame :"))
b1=input("enter the first binary string :")
l=len(b1)
diff=l%s
if(diff!=0):
    b1='0'*(s-diff)+b1
print('the data is :',b1)
d=dict()
j=1
for i in range(0,1,s):
    d[j]=b1[i:i+s]
    j+=1
print('the dictionary is:',d)
#xor
def xor(a,b):
    r=''
    for j in range(s):
        if a[j]!=b[j]:
            r+='1'
        else:
            r+='0'
    return r
for i in range(len(d)-1):
    if result=='':
        a = d.get(i+1)
    else:
        a = result
    b=d.get(int(i)+2)
    result = xor(a,b)
    print('the xored of the frames is :',result)'''
#Method 3
'''def XOR(a,b):
    ans=""
    for i in range(len(a)):
        if((a[i]=='0'and b[i]=='0')or(a[i]=='1'and b[i]=='1')):
            ans+='0'
        else:
            ans+='1'
    return(ans)

n=int(input('enter the number of bits:'))
lst=[]
for i in range(n):
    print("enter")
    X=input()
    lst.append(X)
S=""
for i in range(n):
    S+=lst[i]
    if(n%4!=0):
        S1=S.zfill((n//4 +1)*4)
    else:
        S1=S
dic={}
pos=0
for i in range(0,len(S1),4):
    dic[pos]=S1[i:i+4]
    pos+=1
ans=dic[0]
for i in range(1,len(dic)):
    ans=XOR(ans,dic[i])
print('the XORed output is :',ans)'''

