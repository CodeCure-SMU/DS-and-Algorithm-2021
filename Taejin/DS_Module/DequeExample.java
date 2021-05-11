// DequeExample.java
import java.util.*;

public class DequeExample {
	public static void main( String[] args ) {
		Deque<Integer> dq = new LinkedList<Integer> ( );

		/********** Throws Exception methods **********/
		// Push values
		dq.addFirst( 2 ); // push front
		dq.addFirst( 1 );
		dq.addLast( 3 ); // push back

		// Pop values
		System.out.println( dq.removeFirst( ) );
		System.out.println( dq.removeLast( ) );

		// Front and Back values of deque
		System.out.println( dq.getFirst( ) );
		System.out.println( dq.getLast( ) );

		/********** Return special value **********/
		dq.offerFirst( 2 );
		dq.offerFirst( 1 );
		dq.offerLast( 3 );

		// Pop values
		System.out.println( dq.pollFirst( ) );
		System.out.println( dq.pollLast( ) );

		// Front and Back values of deque
		System.out.println( dq.peekFirst( ) );
		System.out.println( dq.peekLast( ) );
	}
};
// Reference: https://docs.oracle.com/en/java/javase/13/docs/api/java.base/java/util/Deque.html