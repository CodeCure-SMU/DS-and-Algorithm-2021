import java.util.EmptyStackException;

public class Stack {

	private Node top;
	 
    public Stack() {
        this.top = null;
    }
 
    public class Node {
        private String data;
        private Node nextNode;
 
        public Node(String data) {
            this.data = data;
            this.nextNode = null;
        }
 
    }
 
    public String push(String data) {
        Node node = new Node(data);
        node.nextNode = top;
        top = node;
        
        return data;
    }
 
    public String pop() {
        String data = peek();
        top = top.nextNode;        
        return data;
    }
 
    public String peek() {
        if (top == null)
            throw new EmptyStackException();
        return top.data;
    }
 
    public boolean empty() {
        return top == null;
    }
 
    public int search(Object o) {
        int index = 1;
        Node tempTop = top;
        
        while (tempTop != null) {
            if (tempTop.data.equals(o))
                return index;                
            tempTop = tempTop.nextNode;
            
            index++;
        }
 
        return -1;
    }

}
