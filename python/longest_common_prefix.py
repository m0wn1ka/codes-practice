class Solution:
    def longestCommonPrefix(self, strs):
        min_word_len=999
        for j in strs:
            if(min_word_len>len(j)):
                min_word_len=len(j)
        print("min len is ",min_word_len)
        prefix=prevprefix=strs[0][:1]
        print("prefix is ",prefix)
        for i in range(1,(min_word_len+2)):
            prefix=strs[0][:i]
            for j in strs:
                print("checking",j[:i],"and",prefix)
                if (j[:i]==prefix):
                    print("checkk passed ")
                    continue
                else:
                    
                    print("i is ",i)
                    return strs[0][:i-1]
        return strs[0]