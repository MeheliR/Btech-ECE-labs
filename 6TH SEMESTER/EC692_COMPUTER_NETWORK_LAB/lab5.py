#Day 5 : CHECKSUM ALGORITHM
def add_frames(a,b)->str:
    l=len(a)
    #convert a,b to binary integer
    in_a=int(a,2)
    in_b=int(b,2)
    add=in_a+in_b
    return str(bin(add))[2:]

def oneComp(s)->str:
    ans=" "
    for bit in s:
        if bit=='0':
            ans+='1'
        else:
            ans+='0'
    return ans

def sender(frames,flen):
    a=frames[0]
    ck_data=''
    s1,s2='',''
    for i in range(1,len(frames)):
        tmp=a
        a=add_frames(a,frames[i])
        print(f"Addition of {tmp}+{frames[i]}:{a}")
    ck_data=a

    if(len(ck_data)>flen):
        extra_bits=len(ck_data)-flen
        s2=ck_data[extra_bits:]
        s1=(flen-len(ck_data))*'0'+ck_data[:extra_bits]
    ck_data=add_frames(s1,s2)

    if(len(ck_data),flen):
        ck_data=(flen-len(ck_data))*'0'+ck_data
    print(f"After adding all frames:{ck_data}")

    ck_data=oneComp(ck_data)
    print(f"checksum:{ck_data}")
    frames.append(ck_data)
    send=""
    for frame in frames:
        send+=frame
    print(f"Sending Checksum encoded data to receiver:{send}")
    return frames
def receiver(frames,cr=0):
    a=frames[0]
    flen=len(a)
    for i in range(1,len(frames)):
        tmp=a
        a=add_frames(a,frames[i])
        print(f"Addition of {tmp}+{frames[i]}:{a}")
    fr=a

    s1,s2='',''
    if (len(fr)>flen):
        extra_bits=len(fr)-flen
        s2=fr[extra_bits:]
        s1=(flen-len(fr))*'0'+fr[:extra_bits]
    fr=add_frames(s1,s2)

    if(len(fr)<flen):
        fr=(flen-len(fr))*'0'+fr
    #trigger error
    if cr==1:
        fr+='101'
    print(f"After adding all frames:{fr}")
    if fr==('1'*len(fr)):
        print(f"Received without error !")
    else:
        print("Error! Transmit Again!")

def main():
    data=input("enter the first binary string:")
    flen=int(input("enter the lenght of the frame:"))
    l = len(data)
    diff=l%flen
    if(diff != 0):
        data +='0'*(flen-diff)
    print('The data after zero padding is :',data)
    frames=[]
    for i in range(0,len(data),flen):
        frames.append(data[i:i+flen])
    print(f"The Sub-frames are:{frames}")
    print(f"\nSender ->")
    checksum_data = sender(frames,flen)
    print("\nWITHOUT ERROR")
    print(f"\nReceiver <-")
    receiver(checksum_data)
    print("\nWITH ERROR")
    print(f"\nReceiver <-")
    receiver(checksum_data,cr=1)
main()

