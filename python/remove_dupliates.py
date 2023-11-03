class Solution:
    def removeDuplicates(self, nums) :
        expectedNums=[]
        for i in nums:
            if(i not in expectedNums):
                expectedNums.append(i)
        print(expectedNums)
        return len(expectedNums)
obj=Solution()
print(obj.removeDuplicates([1,1,2]))

