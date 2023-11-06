class Solution:
        def sortSentence(self, s: str) -> str:
            s=s.split()
            list1=[]
            for i in range(1,len(s)+2):
                list1.append(0)
            
            for i in s:
                num=int(i[-1])
                list1[num]=i[:-1]
            list1=list1[1:]
            list1=" ".join(list1)
            # print(list1)
            return list1

                      
obj=Solution()
print(obj.sortSentence("is2 sentence4 This1 a3"))
        