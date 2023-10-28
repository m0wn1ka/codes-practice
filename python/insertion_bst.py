# https://www.andrew.cmu.edu/course/15-121/lectures/Trees/trees.html
# https://www.geeksforgeeks.org/deletion-in-binary-search-tree/ 
# Binary Tree in Python programiz site

class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key
    def traverseInOrder(self):
        if self.left:
            self.left.traverseInOrder()
        print(self.val, end=' ')
        if self.right:
            self.right.traverseInOrder()

    def insert(self,root,value):
        if value==root.val:
            print("value already exists")
            return
        elif (value<root.val):
            if(root.left==None):
                root.left=Node(value)
            else:
                self.insert(root.left,value)
        elif(value>root.val):
            if(root.right==None):
                root.right=Node(value)
            else:
                self.insert(root.right,value)
        
        


root = Node(4)

root.left = Node(2)
root.right = Node(5)
root.insert(root,7)
root.traverseInOrder()

