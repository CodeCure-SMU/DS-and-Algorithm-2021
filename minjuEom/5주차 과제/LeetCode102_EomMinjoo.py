class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        if not root:
            return root
        
        binary_tree_list, queue = [], [root]
        while len(queue) != 0:
            children, parent_val = [], []
            while len(queue) != 0:
                parent = queue.pop(0)
                parent_val.append(parent.val)
                if parent.left:
                    children.append(parent.left)
                if parent.right:
                    children.append(parent.right)
            queue = children
            binary_tree_list.append(parent_val)
        return binary_tree_list             
