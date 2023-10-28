class animal:
    prop1=1
    prop2=2
    def fun1(self,a,b):
        print(a+b)
    def fun2(self):
        print(self.prop1+self.prop2)
obj1=animal()
# obj1.fun1(3,4)
# obj1.fun2()
class class2:
    def __init__(self,a,b):
        self.a=a
        self.b=b
        self.const=5
        print(f"the intialiazaiton happend with a={self.a} & b={self.b}")
    def fun1(self,a,b):
        self.a=1111
        print(a,b)
    def fun2(self,a,b):
        print(self.a,self.b)
# obj2=class2(11,12)
# obj2.fun1(1,2)
# obj2.fun2(3,4)
# obj3=class2(123,456)
# obj3.fun2(0,0)
# join method
a = "".join(map(str, [1, 2, 3, 4]))
print(a)
