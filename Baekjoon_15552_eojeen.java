import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class AB {

	public static void main(String[] args) throws IOException {

		int result = 0;
		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter w = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int num = Integer.parseInt(b.readLine());
		
		StringBuilder sb = new StringBuilder();
		
		for(int i = 0; i<num;i++) {
			String n = b.readLine();
			int index = n.indexOf(" ");
			w.write(Integer.parseInt(n.substring(0,index))+Integer.parseInt(n.substring(index+1))+"\n");
			
		}
		b.close();
		w.flush();
		w.close();
	}
	

}
