import random
import time

def receiver(data,bit,num_pos):
    if bit ==data[num_pos]:
        return True
    return False
def sender(data):
    bin_pos = 0
    num_pos = 0
    ack = 0
    count = 0

    while (num_pos != len(data)):
        #print("{data} is send for postion {position}".format(data=data[num_pos], position=bin_pos))
        status = random.randint(1,10)
        flag = status % 3
        time.sleep(1)
        count += 1

        if flag == 0:
            if (num_pos == 0):
                print("{data} is not received".format(data=data[num_pos]))
                print("ACK not received")
                bit = data[num_pos]
            else:
                print("{data} is not received".format(data=data[num_pos]))
        else:
            bit = data[num_pos]
        time.sleep(0.3)
        ack = receiver(data,bit,num_pos)
        if count > 1:
            print("Time out\n")
            return False
        if ack == True:
            print("Data received successfully for position {position}".format(data=data[num_pos], position=bin_pos))
            print("ACK received \n")
            bin_pos = bin_pos ^ 1
            num_pos += 1
            count = 0
        else:
            print("ACK not received")
    return True
if __name__ == "__main__":
    data =input("Enter the data: ")
    check = sender(list(data))

    if (check == True):
        print("\nAll data send successfully")
    #else:
       # print("Error in data frame")

