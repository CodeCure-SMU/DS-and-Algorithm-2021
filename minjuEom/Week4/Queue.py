class Node(object):
    def __init__(self, data):
        self.data = data
        self.next = None

class SinglyLinkedList(object):
    def __init__(self):
        self.head = None
        self.tail = None

    def enqueue(self, node):
        if self.head == None:
            self.head = node
            self.tail = node
        else:
            self.tail.next = node
            self.tail = self.tail.next

    def dequeue(self):
        if self.head ==None:
            return -1

        v = self.head.data
        self.head = self.head.next

        if self.head == None:
            self.tail = None
        return v

    def print(self):
        curn = self.head
        string = ""
        while curn:
            string += str(curn.data)
            if curn.next:
                string += "->"
            curn = curn.next
        print(string)

if __name__ == "__main__":
    s = SinglyLinkedList()
    s.enqueue(Node(1))
    s.enqueue(Node(2))
    s.enqueue(Node(3))
    s.enqueue(Node(4))
    s.print()

    print(s.dequeue())
    print(s.dequeue())
    s.print()
    print(s.dequeue())
    print(s.dequeue())
