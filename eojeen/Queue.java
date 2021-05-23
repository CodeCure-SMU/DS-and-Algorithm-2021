import java.util.NoSuchElementException;

public class Queue<T> {
	
	class Node<T>{
		private T data;
		private Node<T> next;
		
		public Node(T data) {
			this.data = data;
		}
	}
	private Node<T> head;
	private Node<T> last;
	
	public void add(T item) {
		Node<T> t = new Node<T>(item);
		if(last!=null) {
			last.next = t;
		}
		last = t;
		if(head == null) {
			head = last;
		}
	}
	public T remove() {
		if(head==null) {
			throw new NoSuchElementException();
		}
		return head.data;
	}
}
