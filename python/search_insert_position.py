# given a list 
# Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order
class Solution:
    def searchInsert(self, nums, target) :
        if(target<nums[0]):
            return 0
        for i in range(len(nums)):
            nums.append(99999)

            if(nums[i]==target):
                return i
            elif(nums[i]<target  and nums[i+1]>target):
                return i+1
            else:
                continue