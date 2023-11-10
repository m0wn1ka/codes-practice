class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        b_count="ballon".count('b')
        a_count="ballon".count('a')
        l_count="ballon".count('l')
        o_count="ballon".count('o')
        n_count="ballon".count('n')
        old=[b_count,a_count,l_count,o_count,n_count]
        count_b=text.count('b')
        count_a=text.count('a')
        count_l=text.count('l')
        count_o=text.count('o')
        count_n=text.count('n')
        
        new=[count_b,count_a,count_l,count_o,count_n]
        ans = [0] * len(old)
      
        for i in range(len(old)):
            
            if(old[i]%new[i]==0):
                ans[i]=old[i]/new[i]
            else:
                ans[i]=-1
        flag=True
        
        for i in ans:
            if (i==-1):
                flag=False
                break
            if(i!=1):
                flag=False
                break
                
        if(flag==True):
            return new[0]/old[0]
        if(flag==False):
            return 0
obj=Solution()
ans=obj.maxNumberOfBalloons("loonbalxballpoon")
print(ans)
