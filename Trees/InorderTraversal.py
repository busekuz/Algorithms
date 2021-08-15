from Tree import Node
import argparse

"""
Inorder (Left, Root, Right) : 4 2 5 1 3 
"""

def inorder_iterative(root):
    if not root:
        return
    
    stack = []

    while root or len(stack) > 0:
        while root:
            stack.append(root)
            root = root.left
        
        root = stack.pop()
        print(root.val)
        root = root.right

def inorder_recursive(root):
    if not root:
        return
    
    inorder_recursive(root.left)
    print(root.val)
    inorder_recursive(root.right)


parser = argparse.ArgumentParser()
parser.add_argument('--recursive',"-r", action='store_true')
parser.add_argument('--iterative',"-i", action='store_true')
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
    print("Recursive inorder traversal")
    inorder_recursive(root)

elif args.iterative:
    print("Iterative inorder traversal")
    inorder_iterative(root)

