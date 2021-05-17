import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Bracket {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb= new StringBuilder();
		int n = Integer.parseInt(br.readLine());
		
		
		for(int i = 0; i<n;i++) {
			sb.append(solve(br.readLine())).append('\n');
		}
		System.out.println(sb);
	}
	public static String solve(String s) {
		Stack<Character> stack = new Stack<Character>();
		
			for(int i = 0; i<s.length();i++) {
				char c = s.charAt(i);
				if(c=='(') {
					stack.push(c);
				}
				else if(stack.empty()) {
					return "NO";
				}
				else {
					stack.pop();
				}
			}
			if(stack.empty()) {
				return "YES";
			}
			else {
				return "NO";
			}
	}

}
