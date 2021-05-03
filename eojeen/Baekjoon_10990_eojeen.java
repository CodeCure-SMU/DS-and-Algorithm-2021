import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Scanner;

public class Star {

	public static void main(String[] args) throws IOException {
		
		
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		for (int i = 0; i < n; i++) {
			for (int j = n - 1; j > i; j--) {
				System.out.print(" ");
				
			}
			
			System.out.print("*");
			
			for(int k = 0; k<2*i-1;k++) {
					System.out.print(" ");
			}
			
			if(i>0) {
				
				System.out.print("*");
				
			}
			System.out.println("");
			
		}
		
	}

}
