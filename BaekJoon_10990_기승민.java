package javacodecure;
import java.util.Scanner;

public class CodeCure102 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner scan = new Scanner(System.in);
		int sc = scan.nextInt();
		
		for (int i=0; i<sc; i++) {
			for (int j=0; j<sc-1-i; j++) {
				System.out.print(" ");
			}
			System.out.print("*");
			
			for (int j=2; j<2*i+1; j++) {
				System.out.print(" ");
			}
			if ( i >= 1) {
				System.out.print("*");
			}
			
			System.out.println("");
		}
		

	}

}
