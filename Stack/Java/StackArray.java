public class StackArray<T> {
    private T[] arr;
    private int top,size;
    public StackArray(){
        arr = (T[]) new Object[10];
        this.size = 10;
        this.top = -1;
    }
    public StackArray(int size){
        arr = (T[]) new Object[size];
        this.size = size;
        this.top = -1;
    }
    public void push(T value){
          if(top >= size - 1){
              System.out.println("Stack Overflow");
              return;
          }
          arr[++top] = value;
    }
    public void pop(){
        if(top <= -1){
            System.out.println("Stack Underflow");
            return;
        }
        top--;
    }
    public int getLength(){
        return top + 1;
    }
    public int getSize(){
        return size;
    }
    public void print(){
        for(int i=0; i<=top; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
}
