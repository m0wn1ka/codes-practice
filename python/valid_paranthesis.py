class Solution:
    def isValid(self, s: str) -> bool:
        open=["{","[","("]
        close=["}","]",")"]
        stack=[]
        for i in s:
            print("checking ",i)
            if i in open:#open array contains open brackets
                c_close=open.index(i)
                stack.append(close[c_close])#stack to track of open brackets
                print("after appening stack is ",stack)
            elif(len(stack)!=0):
                
                if(stack.pop()==i):#check last opened is the one being clo
                    print("after popiing out stack is ",stack)
                    continue
                else:
                    return False
            else:
                return False
        return (len(stack)==0)
obj=Solution()
print(obj.isValid("]"))
