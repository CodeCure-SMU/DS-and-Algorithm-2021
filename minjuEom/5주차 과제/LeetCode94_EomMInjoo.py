class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        answer=[]
        inOrder(root,answer)
        return answer
        
        
def inOrder(node, answer):
    if node==None : return 
    inOrder(node.left,answer)
    answer.append(node.val)
    inOrder(node.right,answer)
