// QueueExample.java
import java.util.*;

public class QueueExample {
	public static void main( String[] args ) {
		// Declaration
		Queue<Integer> q = new LinkedList<Integer> ( );

		/********** Throws exception **********/
		// Enqueue Values
		q.add( 1 );
		q.add( 2 );
		q.add( 3 );

		// Dequeue Value
		System.out.println( q.remove( ) );

		// Return head of queue
		System.out.println( q.element( ) );

		/********** Return special value **********/
		// Enqueue Values
		q.offer( 1 );
		q.offer( 2 );
		q.offer( 3 );

		// Dequeue Values
		System.out.println( q.poll( ) );

		// Return head of queue
		System.out.println( q.peek( ) );
	}
};
// Reference: https://docs.oracle.com/en/java/javase/13/docs/api/java.base/java/util/Queue.html