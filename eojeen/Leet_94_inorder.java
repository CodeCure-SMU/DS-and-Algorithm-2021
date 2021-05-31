import java.util.*;

public class Inorder {

	List<Integer> ret;
	public static void main(String[] args) {
		
		TreeNode root = new TreeNode(1);
		TreeNode t1 = new TreeNode(2);
		TreeNode t2 = new TreeNode(3);
		root.right = t1;
		t1.left = t2;
		
		Inorder test = new Inorder();
		for(Integer i : test.inorderTraversal(root)) {
			System.out.print(i+"");
		}
		System.out.println();
	}
	public List<Integer> inorderTraversal(TreeNode root){
		ret = new ArrayList<Integer>();
		inorderTraverse(root);
		return ret;
	}
	private void inorderTraverse(TreeNode self) {
		if(self==null) {
			return;
		}
		inorderTraverse(self.left);
		ret.add(self.val);
		inorderTraverse(self.right);
		
	}
	
}
class TreeNode{
	int val;
	TreeNode left;
	TreeNode right;
	TreeNode(int i){
		val = i;
	}
}
