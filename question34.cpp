class MyCircularQueue {
    int* arr;
    int size;
    int front;
    int rear;

public:
    MyCircularQueue(int k) {
        size = k;
        arr = new int[size];
        front = rear = -1;
    }

    ~MyCircularQueue() {
        delete[] arr;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = value;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        if (front == rear) {  // Single element condition
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear + 1) % size == front;
    }
};