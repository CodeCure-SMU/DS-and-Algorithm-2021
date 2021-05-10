import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class MergeSort {

	public static void main(String[] args) throws NumberFormatException, IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int[] array; 
		int num = Integer.parseInt(br.readLine());
		array = new int[num];
		
		for(int i = 0;i<num; i++) {
			array[i] = Integer.parseInt(br.readLine());
		}
		Mergesort(array);
		for(int i = 0; i<num;i++) {
			bw.write(String.valueOf(array[i]));
			bw.newLine();
			bw.flush();
			
		}
		
		
	}
	public static void Mergesort(int[] array) {
		int n = array.length;
        if(n == 1) return;
        
        int[] s1 = new int[n/2];
        int[] s2 = new int[n - n/2];
        
        for(int i = 0; i < n/2; i++){
            s1[i] = array[i];
        }
        
        for(int i = 0; i < n - n/2; i++){
            s2[i] = array[i + n/2];
        }
        
        Mergesort(s1);
        Mergesort(s2);
        
        Merge(s1, s2, array);
	}
	public static void Merge(int[] s1, int[] s2, int[] array) {
		 int num1 = 0;
		 int num2 = 0;
		 int num3 = 0;
         
         while(num1 < s1.length){
             if(num2 <  s2.length){
                 if(s1[num1] < s2[num2]){
                     array[num3] = s1[num1];
                     num1++;
                 }else{
                     array[num3] = s2[num2];
                     num2++;
                 }
                 num3++;
             }else{
                 while(num1 < s1.length){
                     array[num3] = s1[num1];
                     num1++;
                     num3++;
                 }
             }
             while(num2 < s2.length){
                 array[num3] = s2[num2];
                 num2++;
                 num3++;
             }
         }
	}
}
