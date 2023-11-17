class Solution(object):
    def numJewelsInStones(self, jewels, stones):
        """
        :type jewels: str
        :type stones: str
        :rtype: int
        """
        count=0
        for i in stones:
            if i in jewels:
                count+=1
        return count
obj=Solution()
ans=obj.numJewelsInStones("aA","aAAbbbb")
print("ans is ",ans)