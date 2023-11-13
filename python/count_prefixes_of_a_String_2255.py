class Solution:
    def countPrefixes(self, words, s):
        # words = ["a","b","c","ab","bc","abc"], s = "abc"
        count=0
        for i in words:
            # print("comaprition i",i)
            for j in range(0,len(i)):
                # print("i[0:j ]",i[0:j],"s[0:j]",s[0:j])
                if(i[0:j+1]==s[0:j+1] and len(i)==j+1):
                    
                    # print("accepted word is ",i,"i[0:j+1],s[0:j+1]",i[0:j+1],s[0:j+1],"with j is ",j)
                    count=count+1
                    # print(i,"with respcetive i,j",i,j,"and i[0:j] and s[0:j]",i[0:j],s[0:j])
                    break
        return count
obj=Solution()
# ans=obj.countPrefixes(["a","b","c","ab","bc","abc"],"abc")
ans=obj.countPrefixes(["feh","w","w","lwd","c","s","vk","zwlv","n","w","sw","qrd","w","w","mqe","w","w","w","gb","w","qy","xs","br","w","rypg","wh","g","w","w","fh","w","w","sccy"],"w")
print(ans)
        