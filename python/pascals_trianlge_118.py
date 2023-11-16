class Solution:
    def generate(self, numRows):
        numRows+=1
        list1=[[1],[1,1]]#[1,2,3]
        for i in range(2,numRows):
            new_list=[1,]
            for j in range(len(list1[i-1])-1):
                new_list.append(list1[i-1][j]+list1[i-1][j+1])
            new_list.append(1)
            list1.append(new_list)
        return list1
obj=Solution()
ans=obj.generate(5)
print("Ans is ",ans)
        