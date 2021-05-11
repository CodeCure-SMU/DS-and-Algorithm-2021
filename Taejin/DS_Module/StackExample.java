// StackExample.java
import java.util.*;

public class StackExample {
	public static void main( String[] args ) {
		// Declaration
		Stack<Integer> stck = new Stack<Integer>();

		// Push values
		stck.push( 1 );
		stck.push( 2 );
		stck.push( 3 );

		// Pop value
		System.out.println( stck.pop() );

		// Top of stack
		System.out.println( stck.peek() );
	}
};
// Reference: https://docs.oracle.com/en/java/javase/13/docs/api/java.base/java/util/Stack.html