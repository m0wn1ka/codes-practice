class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s=""
        for i in digits:
            s=s+str(i)
        s=int(s)
        s=s+1
        s=list(str(s))
        for i in range(len(s)):
            s[i]=int(s[i])

        return s

        