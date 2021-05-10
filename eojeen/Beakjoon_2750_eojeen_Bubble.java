import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Bubble {

	public static void main(String[] args) throws NumberFormatException, IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int[] array; 
		int num = Integer.parseInt(br.readLine());
		array = new int[num];
		
		for(int i = 0;i<num; i++) {
			array[i] = Integer.parseInt(br.readLine());
		}
		
		for(int i = 0; i <num-1; i++) {
			for(int j =0; j < num-1-i; j++) {
		    
				if(array[j] > array[j+1]) {
					int temp = array[j];
					array[j] = array[j+1];
					array[j+1] = temp;
				}
				
			}
			
		}
		for(int i = 0; i<num;i++) {
			System.out.println(array[i]);
		}
		
	}

}
