class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def dfs(node):
            if (node):
                result.append(node.val)
                dfs(node.left)
                dfs(node.right)
                return
        dfs(root)
        return result
