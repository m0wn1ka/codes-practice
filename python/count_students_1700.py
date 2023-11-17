class Solution(object):
    def countStudents(self, students, sandwiches):
        """
        :type students: List[int]
        :type sandwiches: List[int]
        :rtype: int
        """
        sw_index=0
        nxt_round=[]
        prev_round=students
        i=j=0
        while j<20: 
            j+=1 
            print("j i s",j)
            for i in range(len(tuple(students))):
                print("i is ",i)
                satisfied=False
                #if we reach end of sandwiches box we repeate it from first
                if(sw_index==len(sandwiches)-1):
                    sw_index=0
                print("students is ",students)
                #if taste of food matches and sandwitch is not allocated to others
                if(students[i]==sandwiches[sw_index] and sandwiches[sw_index]!=-1):
                    sandwiches[sw_index]=-1
                    sw_index+=1
                    students.pop(i)
                    satisfied=True
                if(satisfied==False):
                    #if student is not satisfied ,wil join in next round
                    nxt_round.insert(0,i)
            if(prev_round==students):
                print("peple are still hungry ")
                return len(prev_round)
            prev_round=tuple(students)
            
            #prev_round will store prev rounds students
            students=nxt_round
            #students will store next round students
obj=Solution()
ans=obj.countStudents([1,1,0,0],[0,1,0,1])
print("ans is ",ans)