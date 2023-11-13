class Solution:
    def mostFrequentEven(self, nums):
        #nums=[0,1,2,2,4,4,1]
        #have a if block of even nums chekc
        #then insert each even element into a dict with key as num and
        # value as 1 if it is already not present (new_number in dictionary.keys())
        #if element is already present increment the value of corresponding key
        #a[1]=a[1]+1
        #then compare which elem has most value
        #if two have same value take the min one
        dict1={}
        for i in nums:
            if(i%2==1):
                continue
            if(i in dict1.keys()):
                dict1[i]=dict1[i]+1
                continue
            dict1[i]=1
        # print("dict is ",dict1)
        #first find max value 
        #then find the corresponding keys
        max_val=0
        max_keys=[]#aray with elements which appered max
        for i in dict1.values():
            if(i>max_val):
                max_val=i
        for i in dict1:
            if (dict1[i]==max_val and (i not in max_keys)):
                max_keys.append(i)
        
        max_keys.sort()
        # print(max_keys,"are max keys")
        if(max_keys==[]):
            return -1
        return max_keys[0]    
obj=Solution()
ans=obj.mostFrequentEven([4,4,4,9,2,4])
print("ans is ",ans)
        