class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def dfs(node):
            if (node):
                dfs(node.left)
                dfs(node.right)
                result.append(node.val)
                return
        dfs(root)
        return result
