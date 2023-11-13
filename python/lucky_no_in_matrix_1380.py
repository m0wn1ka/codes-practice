class Solution:
    def luckyNumbers (self, matrix):
        lucky_nums=[]
        rows=len(matrix)
        cols=len(matrix[0])
        row_min=[]
        col_max=[]
        # print("rows cols",rows,cols)
        for i in range(rows):
            row_min_val=99999
            for j in range(cols):
                if(matrix[i][j]<row_min_val):
                    row_min_val=matrix[i][j]
            row_min.append(row_min_val)
        print("row wise min values",row_min)
        #now let us print column wise min values
        for i in range(cols):
            col_max_val=0
            for j in range(rows):
                if(matrix[j][i]>col_max_val):
                    col_max_val=matrix[j][i]
            col_max.append(col_max_val)
        print("col wise min values",col_max)
        for p in row_min:
            for q in col_max:
                if(p==q and (p not in lucky_nums )):
                    lucky_nums.append(p)
                    
        return lucky_nums
            
obj=Solution()
# ans=obj.luckyNumbers([[1,10,4,2],[9,3,8,7],[15,16,17,12]])
ans=obj.luckyNumbers([[56216],[63251],[75772],[1945],[27014]])
print("ans is ",ans)
        