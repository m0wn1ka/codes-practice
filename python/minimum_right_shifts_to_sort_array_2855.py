class Solution:
    #0,1,2,3
    def minimumRightShifts(self, nums):
        
        
        for shift in range(len(nums)):
            index_start=len(nums)-shift
            flag=True
            # print("shift is ",shift,"index_start is",index_start)
            for i in range(index_start,(index_start+len(nums)-1)):
                if(i+1>=len(nums)):
                    i=i-len(nums)
                if(nums[i]>nums[i+1]):
                    # print("broke at i,i+1",i,i+1,"aray[i],aray[i+1]",nums[i],nums[i+1])
                    flag=False
                    break
            if(flag==True):
                return shift
        return -1 
obj=Solution()
# ans=obj.minimumRightShifts([2,1,4])
ans=obj.minimumRightShifts([3,4,5,1,2])
print("ans is ",ans)      
                
                
                
            
        
        