class Solution:
    def addBinary(self, a: str, b: str) -> str:
        if(a=="0" and b=="0"):
            return str(0)
        len_a = len(a)
        len_b = len(b)

        len_c = len_a + len_b
        a_pad = len_c - len_a
        a_zero = ""
        b_pad = len_c - len_b
        b_zero = ""  # string which will be prepended to b with zeros
        
        for i in range(a_pad):
            a_zero = a_zero + "0"
        for i in range(b_pad):
            b_zero = b_zero + "0"
         
        c = []
        ans = []
        for i in range(len_c):
            c.append(0)
            ans.append(0)
            
        a = a_zero + a
        b = b_zero + b
        a = list(a)
        b = list(b)
        for i in range(len(a)):
            a[i]=int(a[i])
            b[i]=int(b[i])
        for i in range(len(a)-1, -1, -1):
            if(a[i] + b[i] + c[i] == 3):
             ans[i]=1
             c[i-1]=1
            if(a[i] + b[i] + c[i] == 2):
             ans[i]=0
             c[i-1]=1
            if(a[i] + b[i] + c[i] == 1):
             ans[i]=1
             c[i-1]=0
            if(a[i] + b[i] + c[i] == 0):
             ans[i]=0
             c[i-1]=0
        print("ans is",ans,"carry is ",c,"a is ",a,"b is ",b)
        s=""
        flag=False
        
        for i in ans:
            if(i!=0 and flag==False):
                flag=True
            if( flag==True):
                s=s+str(i)
            
            
                
        return s