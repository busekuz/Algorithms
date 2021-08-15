from Tree import Node
import argparse

"""
Postorder (Left, Right, Root) : 4 5 2 3 1
"""


def postorder_recursive(root):
    if not root:
        return

    postorder_recursive(root.left)
    postorder_recursive(root.right)
    print(root.val)


root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)


postorder_recursive(root)

