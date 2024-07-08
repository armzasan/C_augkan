class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


def insert(root, value):
    if root is None:
        return Node(value)

    if value < root.value:
        root.left = insert(root.left, value)
    else:
        root.right = insert(root.right, value)

    return root


def postorderTraversal(root):
    if root:
        postorderTraversal(root.left)
        postorderTraversal(root.right)
        print(root.value, end="->")


# สร้าง binary tree จาก string input
input_string = "H->I->E->D->B->F->J->K->G->C->A"
values = input_string.split("->")

root = Node(values[0])

for value in values[1:]:
    insert(root, value)

# แสดงผล postorder traversal
postorderTraversal(root)
