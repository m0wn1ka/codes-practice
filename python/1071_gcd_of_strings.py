class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        len_of_str1=len(str1)
        len_of_str2=len(str2)
        if(len_of_str1>len_of_str2):
            big_str=str1
            small_str=str2
        else:
            big_str=str2
            small_str=str1
        parts_of_small_str=[]
        for i in range(1,(len(small_str)+1)):
            parts_of_small_str.append(small_str[:i])
        print(parts_of_small_str)
obj1=Solution()
obj1.gcdOfStrings("abab","ab")