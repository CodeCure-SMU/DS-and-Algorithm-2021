package javacodecure;
import java.util.*;

public class CodeCure_302_1021 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner scan = new Scanner(System.in);
		
		LinkedList<Integer> deque = new LinkedList<Integer>();
		
		int count = 0;
		
		int a = scan.nextInt();
		int b = scan.nextInt();	
		
		for(int i = 1; i <= a; i++) {
			deque.offer(i);
		}
		
		int[] seq = new int[b];	
		
		for(int i = 0; i < b; i++) {
			seq[i] = scan.nextInt();
		}
		
		
		for(int i = 0; i < b; i++) {			
			
			int target_idx = deque.indexOf(seq[i]);
			int half_idx;

			if(deque.size() % 2 == 0) {
				half_idx = deque.size() / 2 - 1;
			}
			else {
				half_idx = deque.size() / 2;
			}
			

			if(target_idx <= half_idx) {
		
				for(int j = 0; j < target_idx; j++) {
					int temp = deque.pollFirst();
					deque.offerLast(temp);
					count++;
				}
			}
			else {
			
				for(int j = 0; j < deque.size() - target_idx; j++) {
					int temp = deque.pollLast();
					deque.offerFirst(temp);
					count++;
				}
			
			}
			deque.pollFirst();
		}
		
		System.out.println(count);
		
	}

}