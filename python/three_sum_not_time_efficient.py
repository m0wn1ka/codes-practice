class Solution:
    def threeSum(self, nums):
        output=[]
        length=len(nums)
        for i in range(length):
            
            for j in range(length):
                if(i==j):
                    break
                for k in range(length):
                    if(i==j or i==k or j==k):
                        break
                    if(nums[i]+nums[j]+nums[k]==0):
                        a=[nums[i],nums[j],nums[k]]
                        print("a is ",a)
                        if(a not in output):
                            flag=False
                            for x in output:
                                if(a.count(a[0]) == x.count(a[0]) and (a.count(a[1])==x.count(a[1]))  and a.count(a[2])== x.count(a[2])):
                                    print("flag is set to true a is ",a,"and x is ",x)
                                    flag=True
                                    break
                            if(flag==False):
                                output.append(a)
                                print("now output is ",output)
        return output                
obj=Solution()
# print("solutin is ",obj.threeSum([-4,-2,1,-5,-4,-4,4,-2,0,4,0,-2,3,1,-5,0]))        
print("solutin is ",obj.threeSum([-1,0,1,2,-1,-4])) 