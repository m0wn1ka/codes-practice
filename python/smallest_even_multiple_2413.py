class Solution(object):
    def smallestEvenMultiple(self, n):
        """
        :type n: int
        :rtype: int
        """
        if (n%2==0):
            return n
        else:
            return n*2
obj=Solution()
ans=obj.smallestEvenMultiple(6)
print("Ans is ",ans)