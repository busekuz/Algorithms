from Tree import Node
import argparse

"""
Preorder (Root, Left, Right) : 1 2 4 5 3 
DFS
"""

def preorder_iterative(root):
    if not root:
        return
    
    stack = [root]

    while stack:
        root = stack.pop()
        print(root.val)

        if root.right:
            stack.append(root.right)
        if root.left:
            stack.append(root.left)        


def preorder_recursive(root):
    if not root:
        return

    print(root.val)
    preorder_recursive(root.left)
    preorder_recursive(root.right)


parser = argparse.ArgumentParser()
parser.add_argument('--recursive', "-r", action='store_true')
parser.add_argument('--iterative', "-i", action='store_true')
args = parser.parse_args()

root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

if not args.recursive and not args.iterative:
    print("Add \"--recursive\" or \"--iterative\" flag to command")
elif args.recursive and args.iterative:
    print("Choose \"--recursive\" or \"--iterative\" as flag")
elif args.recursive:
    print("Recursive preorder traversal")
    preorder_recursive(root)
elif args.iterative:
    print("Iterative preorder traversal")
    preorder_iterative(root)

