class Solution:
    def __init__(self):
        self.traversal = []
        
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        if root == None:
            return []
        
        self.traversal.append(root.val)
        self.preorderTraversal(root.left)
        self.preorderTraversal(root.right)
        
        return self.traversal
