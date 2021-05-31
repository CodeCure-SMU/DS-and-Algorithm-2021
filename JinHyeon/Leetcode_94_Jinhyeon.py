class Solution:
    def __init__(self):
        self.valList = []


def inorderTraversal(self, root: TreeNode) -> List[int]:
    if root:
        self.inorderTraversal(root.left)
        self.valList.append(root.val)
        self.inorderTraversal(root.right)
        return self.valList