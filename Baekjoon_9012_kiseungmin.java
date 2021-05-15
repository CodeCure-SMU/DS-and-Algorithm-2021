package javacodecure;
import java.util.*;

public class CodeCure_303_9012 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner scan = new Scanner(System.in);
		
		int a = scan.nextInt();
		
		for(int i = 0; i < a; i++) {
			System.out.println(solve(scan.next()));	
			}
		}
 
		public static String solve(String s) {
 
		Stack<Character> stack = new Stack<>();
 
		for (int i = 0; i < s.length(); i++) {
 
			char c = s.charAt(i);
 
			if (c == '(') {
				stack.push(c);
			}

			else if (stack.empty()) {
				return "NO";
			}
			
			else {
				stack.pop();
			}
		}
 
		if (stack.empty()) {
			return "YES";
		} 
		else {
			return "NO";
		}
	}

}