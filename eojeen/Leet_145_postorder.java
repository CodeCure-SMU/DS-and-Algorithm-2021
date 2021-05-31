import java.util.ArrayList;
import java.util.List;

public class Postorder {
	List<Integer> ret;
	public static void main(String[] args) {
		TreeNode root = new TreeNode(1);
		TreeNode t1 = new TreeNode(2);
		TreeNode t2 = new TreeNode(3);
		root.right = t1;
		t1.left = t2;

		Postorder test = new Postorder();
		for(Integer i : test.postorderTraversal(root)) {
			System.out.print(i + " ");
			}
	}
	public List<Integer> postorderTraversal(TreeNode root) {
		ret = new ArrayList<Integer>();
		postorderTraverse(root);
		return ret;
		}
	private void postorderTraverse(TreeNode self) {
		if(self == null) return;
		postorderTraverse(self.left);
		postorderTraverse(self.right);
		ret.add(self.val);
		}

	
}
class TreeNode {
int val;
TreeNode left;
TreeNode right;
TreeNode(int i) { val = i; }
}

