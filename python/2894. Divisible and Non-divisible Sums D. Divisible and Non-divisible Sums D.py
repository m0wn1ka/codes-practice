class Solution:
    def differenceOfSums(self, n, m):
        num1=0#divisible sum
        num2=0#non divisible sum
        for i in range(1,n+1):
            if(i%m==0):
                num2=num2+i
            else:
                num1=num1+i
        # if(num2-num1<0):
        #     return num1-num2
        return num1-num2
obj=Solution()
ans=obj.differenceOfSums(5,1)
print(ans)
        