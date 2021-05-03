import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class BlackJack {

	public static void main(String[] args) throws NumberFormatException, IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		
		int n = Integer.parseInt(st.nextToken());
		int max = Integer.parseInt(st.nextToken());
		
		int[] array = new int[n];
		
		st = new StringTokenizer(br.readLine(), " ");
		
		for (int i = 0; i < n; i++) {
			array[i] = Integer.parseInt(st.nextToken());
		}
		
		int result = search(array, n, max);
		System.out.print(result);
	}
	static int search(int[] arr, int N, int M) {
		int result = 0;
 
		for (int i = 0; i < N - 2; i++) {
 
			for (int j = i + 1; j < N - 1; j++) {
 
				for (int k = j + 1; k < N; k++) {
					
					int temp = arr[i] + arr[j] + arr[k];
					
					if (M == temp) {	
						return temp;
					}
					
					if(result < temp && temp < M) {
						result = temp;
					}
				}
			}
		}
		
		return result;
		
	}

}
