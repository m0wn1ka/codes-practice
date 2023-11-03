class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        flag=True
        if(len(needle)>len(haystack)):
            return -1
        l_needle=len(needle)
        l_haystack=len(haystack)
        index=0
        for i in range(0,(l_haystack-l_needle+1)):
            flag=True
            
            k=0
            
            for j in range((l_needle)):
                
                if(needle[j]==haystack[i+j]):
                    # print("flag is true at i and j are ",i,j)
                    k=k+1
                    index=i
                    if(k==l_needle):
                        index=i
                        return index
                    continue
                else:
                    # print("flag i false at i and j ",i,j)
                    flag=False
                    
        if(flag==True):
            return index
        else:
            return -1