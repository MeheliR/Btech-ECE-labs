counter = 0
index = []
ind = 0
frame = list(map(int,input("Enter the frame data :").split()))
#bit stuffing
for i in range(len(frame)):
    if counter == 5 :
        frame.insert(i,int(0))
        index.append(i)
        counter = 0
    elif frame[i] == 0 :
        counter = 0
    elif frame[i] == 1 :
        counter +=1
    ind = i
#flag 
for i in range(5) :
    frame.insert(i,int(1))
print("Stuffed frame is :",frame)
print("Stuffed at index :",index)
#de-stuffing
real_frame = []
for i in range(len(frame)) :
    if counter == 5 :
        counter = 0
        continue
    elif frame[i] == 0 :
        counter = 0
    elif frame[i] == 1 :
        counter +=1
    real_frame.append(frame[i])
print("De-stuffed frame is :",real_frame)