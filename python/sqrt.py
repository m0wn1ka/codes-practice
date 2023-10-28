class Soulution(object):
    def mySqrt(self,x):
        finalans=0
        for i in range(1,x):
            ans=i*i
            if ans>x:
                finalans=i-1
                break
        return finalans
obj1=Soulution()
print(obj1.mySqrt(66))
