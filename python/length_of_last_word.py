class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.strip(' ')
        length=len(s)

        count=0
        for i in range(length-1,0,-1):
            if(s[i]!=' '):
                count=count+1
            else:
                return count
        return count+1