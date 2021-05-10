import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Selection {

	public static void main(String[] args) throws NumberFormatException, IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int[] array; 
		int num2 = 0;
		int num = Integer.parseInt(br.readLine());
		array = new int[num];
		
		for(int i = 0;i<num; i++) {
			array[i] = Integer.parseInt(br.readLine());
		}
		for(int i = 0; i<num; i++) {
			int min= 1001;
			for(int j = i; j<num; j++) {
				if(min>array[j]) {
					min=array[j];
					num2= j;
				}
				
			}
			int temp = array[i];
			array[i]=array[num2];
			array[num2]=temp;
			
		}
		for(int i = 0; i<num; i++) {
			System.out.println(array[i]);
		}
	}

}
