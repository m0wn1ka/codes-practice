class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        ans_aray=[]
        x=tuple(candies)
        for i in x:
            temp=i+extraCandies
            candies.remove(i)
            maximum=max(candies)
            if (temp>=maximum):
                ans_aray.append(True)
            else:
                ans_aray.append(False)
            candies=list(x)
        return ans_aray
obj=Solution()
ans=obj.kidsWithCandies([2,3,5,1,3],3)
print("ans is ",ans)
    