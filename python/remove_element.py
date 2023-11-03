class Solution:
    def removeElement(self, nums, val) :
        new_list=[]
        for i in nums:
            if (i!=val):
                new_list.append(i)
        print(new_list)
        return len(new_list)
obj=Solution()
print(obj.removeElement([3,2,2,3],3))