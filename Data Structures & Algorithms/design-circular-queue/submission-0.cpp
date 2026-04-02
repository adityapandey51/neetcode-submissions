class MyCircularQueue {
    int *arr;
    int size;
    int front;
    int rear;

public:
    MyCircularQueue(int k) {
        arr = new int[k];
        size = k;
        front =-1;
        rear = -1;
    }
    
    bool enQueue(int value) {
        if(front==-1){
            front =0;
            rear=0;
            arr[0]=value;
            return true;
        }else if(front==((rear+1)%size)){
            return false;
        }else{
            rear = (rear+1)%size;
            arr[rear]=value;
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(front==-1){
            return false;
        }else if(front == rear){
            front = -1;
            rear= -1;
            return true;
        }else{
            front=(front+1)%size;
            return true;
        }
        return false;
    }
    
    int Front() {
        return front!=-1?arr[front]:-1;
    }
    int Rear() {
        return rear!=-1?arr[rear]:-1;
    }
    
    bool isEmpty() {
        return front==-1;
    }
    
    bool isFull() {
        return front==((rear+1)%size);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */