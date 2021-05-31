import java.util.*;

public class LevelOrder {

	public static void main(String[] args) {
		TreeNode root = new TreeNode(3);
		root.left = new TreeNode(9);
		root.right = new TreeNode(20);
		root.right.left = new TreeNode(15);
		root.right.right = new TreeNode(7);
		List<List<Integer>> list = new ArrayList<>();
		list = levelOrder(root);

		for (List<Integer> i : list) {
			System.out.println(i);
		}
		
	}
	public static List<List<Integer>> levelOrder(TreeNode root) {
		List<List<Integer>> ret = new ArrayList<>();
		if(root == null) return ret;
		Queue<TreeNode> q = new LinkedList<>();
		q.offer(root);
		while(!q.isEmpty()) {
		List<Integer> level = new ArrayList<>();
		int size = q.size();
		for(int i = 0; i < size; i++) {
		TreeNode node = q.poll();
		level.add(node.val);
		if(node.left != null) q.offer(node.left);
		if(node.right != null) q.offer(node.right);
		}
		ret.add(level);
		}
		return ret;
		}

}
class TreeNode {
int val;
TreeNode left;
TreeNode right;
TreeNode(int i) { val = i; }
}
