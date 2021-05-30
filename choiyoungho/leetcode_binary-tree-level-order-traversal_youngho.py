import collections

class Solution:
    def levelOrder(self, root: TreeNode) -> List[int]:
        result = []
        que = collections.deque()
        if (root):
            que.append(root)
            result.append([root.val])
            while (que):
                level = []
                que_tmp = collections.deque()
                for node in que:
                    if (node.left):
                        que_tmp.append(node.left)
                        level.append(node.left.val)
                    if (node.right):
                        que_tmp.append(node.right)
                        level.append(node.right.val)
                if level:
                    result.append(level)
                que = que_tmp
        return result
