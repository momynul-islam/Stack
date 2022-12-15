public class StackList<T>{
    class Node<T>{
        T data;
        Node<T> next;
        Node(){}
        Node(T value){
            this.data = value;
            this.next = null;
        }
    }
    private Node<T> head,top;
    private int length;
    StackList(){
        this.head = null;
        this.top = null;
        this.length = 0;
    }
    void push(T value){
        Node<T> newNode = new Node<>(value);
        if(head == null){
            head = newNode;
            top = newNode;
        }
        else {
            top.next = newNode;
            top = newNode;
        }
        length++;
    }
    void pop(){
        if(head == null){
            System.out.println("Stack Underflow");
            return;
        }
        Node<T> current = head;
        while (current.next != null)
            current = current.next;
        top = null;
        current.next = null;
        top = current;
        length--;
    }
    void print(){
        Node<T> current = head;
        while (current != null){
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }
    T peek(){
        return top.data;
    }
    int getLength(){
        return length;
    }
}
