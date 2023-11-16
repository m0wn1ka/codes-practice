class Solution:
    def countOperations(self, num1, num2):
        count=0
        while(num1!=0 and num2!=0):
            print("in this loop num1,num 2 are",num1,num2,"And count is ",count)
            if(num1>=num2):
                num1=num1-num2
                count+=1
                continue
            num2=num2-num1
            count+=1
        return count
obj=Solution()
ans=obj.countOperations(10,10)
print("ans is ",ans)