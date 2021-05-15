package javacodecure;
import java.util.*;

public class CodeCure_301_11866 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		Queue<Integer> q = new LinkedList<>();
		
		int a = scan.nextInt();
		int b = scan.nextInt();
		
		for(int i = 1; i <= a; i++) {
			q.add(i);
		}
		
		StringBuilder sb = new StringBuilder();
		sb.append('<');

		while(q.size() > 1) {
			
			for(int i = 0; i < b - 1; i++) {
				int val = q.poll();
				q.offer(val);
			}
			
			sb.append(q.poll()).append(", ");
		}
 
		sb.append(q.poll()).append('>');
		System.out.println(sb);
	}

}
