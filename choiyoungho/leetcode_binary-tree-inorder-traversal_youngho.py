class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def dfs(node):
            if (node):
                dfs(node.left)
                result.append(node.val)
                dfs(node.right)
                return
        dfs(root)
        return result
