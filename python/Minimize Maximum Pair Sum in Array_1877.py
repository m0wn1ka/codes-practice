class Solution(object):
    def minPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        #approach
        #sort the nums ,create sum array
        #add 1st and last elements ,insert sum to sum array
        #find max value in the sum array
        sum_aray=[]
        nums.sort()
        length=len(nums)-1
        for i in range(int(len(nums)/2)):
            sum_aray.append(nums[i]+nums[length-i])
        return max(sum_aray)
obj=Solution()
ans=obj.minPairSum([3,5,2,3])
print("ans is ",ans)   
        