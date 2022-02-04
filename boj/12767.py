import sys
dbg = 0
if dbg: sys.stdin = open('in.txt','r')

a, b = map(int, sys.stdin.readline().split())


tree = []


class Node:
    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data

    def insert(self,data):
        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data = data


def traverse(root):
    if root:
        print(root.data,end = ' ')
        traverse(root.left)
        traverse(root.right)


def preorder(root):
    ans = []
    ans.append('V')
    if root.left:
        ans.append('L')
        ans.append(preorder(root.left))
        ans.append('l')
    elif root.right:
        ans.append('R')
        ans.append(preorder(root.right))
        ans.append('r')
    ans.append('V')
    return ans

def order(root):
    if root:
        ans.append('v')
        if root.left:
            ans.append('l')
            order(root.left)
        if root.right:
            ans.append('r')
            order(root.right)

d = dict()

for _ in range(a):
    p = list(map(int, sys.stdin.readline().split()))
    t = Node(0)
    for e in p:
        t.insert(e)

    tree.append(t)
    ans = []
    order(t)
#    print(ans)
#    k = preorder(t)

    if dbg: traverse(t)
#    if dbg: print(str(k))
    if dbg: print()
    d[str(ans)] = 1
print(len(d))