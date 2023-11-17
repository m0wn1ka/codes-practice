class Solution(object):
    def numberOfEmployeesWhoMetTarget(self, hours, target):
        """
        :type hours: List[int]
        :type target: int
        :rtype: int
        """
        count=0
        for i in hours:
            if (i>=target):
                count+=1
        return count
obj=Solution()
ans=obj.numberOfEmployeesWhoMetTarget([0,1,2,3,4],2)
print("ans is ",ans)
        