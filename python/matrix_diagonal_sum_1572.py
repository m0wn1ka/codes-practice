class Solution:
    #row 0      1       2
    #col col-1  col-2   col-3
    def diagonalSum(self, mat):
        rows=len(mat)
        cols=len(mat[0])
        sum=0
        for i in range(rows):
            for j in range(cols):
                print("i,j are",i,j)
                if(i==j or j==cols-i-1):
                    print("now sum is ",sum,"mat[i][j]",mat[i][j])
                    sum=sum+mat[i][j]
                    print("updadted sum is ",sum)
        return sum
obj=Solution()
ans=obj.diagonalSum([[1,2,3],[4,5,6],[7,8,9]])
print("ans is ",ans)
        