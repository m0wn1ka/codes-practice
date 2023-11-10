class Solution:
    #abcd
    def buddyStrings(self, s, goal):
        s=list(s)
        goal=list(goal)
        temp=list(s)
        for i in range(len(s)):
            print("i is ",i)
            for j in range(len(s)): 
                temp=list(s)  
                print("j is ",j,"temp is at j lop start",temp,"and s is",s)
                if(i==j):
                    continue
               
                temp_char=temp[i]
                print("temp befre swap is ",temp,"temp_char iss",temp_char)
                temp[i]=temp[j]
           
                print("temp after just one replacement",temp)
                temp[j]=temp_char
                print("temp after swap is",temp)
                if(str(temp)==str(goal)):
                    print("true at temp,goal are",str(temp),str(goal))
                    return True
        return False
obj=Solution()
ans=obj.buddyStrings("ab","ab")
print("ans is ",ans)              
        
