import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.StringTokenizer;

public class Que {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		LinkedList<Integer> que = new LinkedList<Integer>();
		int count = 0;
		StringTokenizer st = null;
		
		int N = Integer.parseInt(st.nextToken());
		int K = Integer.parseInt(st.nextToken());
		int[] array = new int[K];
		
		for(int i = 1; i <= N; i++) {
			que.offer(i);
		}
		st = new StringTokenizer(br.readLine(), " ");
		for(int i = 0; i < K; i++) {
			array[i] = Integer.parseInt(st.nextToken());
		}
		

		for(int i = 0; i < K; i++) {
			int target_idx = que.indexOf(array[i]);
			int half_idx;
			if(que.size() % 2 == 0) {
				half_idx = que.size() / 2 - 1;
			}
			else {
				half_idx = que.size() / 2;
			}
			if(target_idx <= half_idx) {
				for(int j = 0; j < target_idx; j++) {
					int temp = que.pollFirst();
					que.offerLast(temp);
					count++;
				}
			}
			else {
				for(int j = 0; j < que.size() - target_idx; j++) {
					int temp = que.pollLast();
					que.offerFirst(temp);
					count++;
				}
			
			}
			que.pollFirst();
		}
		System.out.println(count);
	}

}
