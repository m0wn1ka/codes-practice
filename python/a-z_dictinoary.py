dict1={}
nums=[]
alphabets=[]
for i in range(0,26):
    nums.append(i)
for i in range(97,123):
    alphabets.append(chr(i))
for i,j in zip(nums,alphabets):
    dict1[j]=i
print("dict is ",dict1)

