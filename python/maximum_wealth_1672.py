class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        wealth=[]
        rows=len(accounts)
        cols=len(accounts[0])
        for i in range(rows):
            w=0
            for j in range(cols):
                w=w+accounts[i][j]
            wealth.append(w)
        return max(wealth)
obj=Solution()
ans=obj.maximumWealth([[1,2,3],[3,2,1]])
print("ans is",ans)