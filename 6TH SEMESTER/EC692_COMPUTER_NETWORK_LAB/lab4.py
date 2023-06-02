'''DAY-4 COMPUTER NETWORK LAB'''
#CYCLIC REDUNDANCY CHECK PROTOCOL
def xor(key,k_frame):
    r=''
    for j in range(len(key)):
        if key[j] != k_frame[j]:
            r+='1'
        else:
            r+='0'
    return r

def mod2div(key,data):
    dlen = len(data)
    klen = len(key)
    rem = xor(key,data[:klen])
    for i in range(klen,dlen):
        if rem[1] == '1':
            k_frame = rem[1:]+data[i]
            rem = xor(key,k_frame)
        elif rem[1] =='0':
            key_0 = '0'*klen
            k_frame = rem[1:]+data[i]
            rem = xor(key_0,k_frame)
    return rem
def helper(data,key,cr=0):
    k_data = data + '0'*(len(key)-1)
    rem = mod2div(key,k_data)
    print(f"The data is {data}\nThe key is {key}")
    s_data =data+rem[1:]
    if cr == 1:   #triggering error
        s_data = data+'110'+rem[1:] #adding error
        print(f"Sender:\nOriginal data: {data}\nKey is: {key} \nData with zeros added:{k_data} \nCRC encoded data: {s_data}")
        r_rem = mod2div(key,s_data)
        if int(r_rem)==0:
            print(f"\nReceiver:\nReceived data: {s_data}\nRemainder is:{r_rem}\nSuccess!!Data Received Without Error.")
        else:
            print(f"\nReceiver:\nReceived data: {s_data}\nRemainder is:{r_rem}\nError!!Resend Data.")
def main():
    print("\nData without error")
    data = '1101011011'
    key = '10011'
    helper(data,key)
    print("\nData with Error")
    helper(data,key,cr=1) #cr=1 will trigger error
main()  