print("helo worlddd")
class Soulution:
    def mergeAlternativly(self,word1,word2):
        i=j=0
        ans=[]
        while(i<len(word1) and j<len(word2)):
            ans.append(word1[i])
            ans.append(word2[j])
            i=i+1
            j=j+1
        ans.append(word1[i:])
        ans.append(word2[j:])
        return "".join(ans)
obj1=Soulution()
print(obj1.mergeAlternativly("abc","def"))
