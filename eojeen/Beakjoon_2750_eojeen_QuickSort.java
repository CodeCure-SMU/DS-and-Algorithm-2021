import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class QuickSort {

	public static void main(String[] args) throws NumberFormatException, IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int[] array; 
		int num = Integer.parseInt(br.readLine());
		array = new int[num];
		
		for(int i = 0;i<num; i++) {
			array[i] = Integer.parseInt(br.readLine());
		}
		array = Quicksort(array,0,array.length-1);
		for(int i = 0; i<num; i++) {
			System.out.println(array[i]);
		}
		
		
	}
	static int Partition(int[] array, int start, int end) {
		int pivot = array[(start+end)/2];
		while(start<=end) {
			while(array[start]<pivot) {
				start++;
			}
			while(array[end]>pivot) {
				end--;
			}
			if(start<=end) {
				int temp = array[start];
				array[start] = array[end];
				array[end] = temp;
				start++;
				end--;
			}
		}
		return start;
	}
	static int[] Quicksort(int[] array, int start, int end) {
		int part = Partition(array, start, end);
		if(start<part-1) {
			Quicksort(array,start,part-1);
		}
		if(part<end) {
			Quicksort(array, part, end);
			
		}
		return array;
	}

}
