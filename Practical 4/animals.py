class A:
    def fun(self):
        print("Fun of A called")

class B(A):
    def fun(self):
        print("Fun of B called")
    
class C(A):
    def fun(self):
        print("Fun of C called")

class D(B, C):
    pass
d=D()
d.fun()

"""check"""