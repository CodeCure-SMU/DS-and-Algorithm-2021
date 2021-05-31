import java.util.ArrayList;
import java.util.List;

public class Preorder {
	List<Integer> ret;
	public static void main(String[] args) {
		TreeNode root = new TreeNode(1);
		TreeNode t1 = new TreeNode(2);
		TreeNode t2 = new TreeNode(3);
		root.right = t1;
		t1.left = t2;
		
		Preorder test = new Preorder();
		for(Integer i : test.preorderTraversal(root)) {
			System.out.print(i+"");
		}
	}
	public List<Integer> preorderTraversal(TreeNode root) {
		ret = new ArrayList<Integer>();
		preorderTraverse(root);
		return ret;
		}
	private void preorderTraverse(TreeNode self) {
		if(self == null) return;
		ret.add(self.val);
		preorderTraverse(self.left);
		preorderTraverse(self.right);
		}

}
class TreeNode {
int val;
TreeNode left;
TreeNode right;
TreeNode(int i) { val = i; }
}

