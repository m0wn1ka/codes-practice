class Solution:
    def oddString(self, words):
        new_dict={}
        final_dict={}
        diff_array=[]
        ans=""
        
        dict1={'a': 0, 'b': 1, 'c': 2, 'd': 3, 'e': 4, 'f': 5, 'g': 6, 'h': 7, 
'i': 8, 'j': 9, 'k': 10, 'l': 11, 'm': 12, 'n': 13, 'o': 14, 'p': 15, 'q': 16, 'r': 17, 's': 18, 't': 19, 'u': 20, 'v': 21, 'w': 22, 'x': 23, 'y': 24, 'z': 25}
        for i in words:
            #for each word calculate diff aray & append to diff aray
            word_aray=[]
            for j in range(len(i)-1):
                diff=dict1[i[j+1]]-dict1[i[j]]
                word_aray.append(diff)
            diff_array.append(word_aray)
            final_dict[i]=word_aray
        print(final_dict)
        index=-1
        pre=final_dict[words[0]]
        aray1=[]
        aray1.append(words[0])
        aray2=[]
        for i in final_dict:
            flag=0
            for j,k in zip(pre,final_dict[i]):
                if(j!=k):
                    aray2.append(i)
                    flag=1
                    break
            if(flag==0 and (i not in aray1)):
                aray1.append(i) 
        print("aray1 ",aray1,"arat2",aray2)  
        if(len(aray2)==1):
             return aray2[0]
        else:
            return aray1[0]
                
                
        
obj=Solution()
# ans=obj.oddString(["adc","wzy","abc"])
# print(ans)ss
ans=obj.oddString(["dtzca","dtzca","dtzca","yqyyo","dtzca","dtzca"])
print("ans",ans)
                
        