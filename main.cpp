#include <iostream>

using namespace std;
#define max 5

class Queue {
    int rear = -1;
    int front = -1;
public:
    int a[max];

    void enQueue(int num);

    void deQueue();

    bool isEmpty();

    void peek();

    void printAll();
};

bool Queue::isEmpty() {
    if (rear == -1) {
        return true;
    } else {
        return false;
    }
}



void Queue::enQueue(int num) {
    if (rear == -1) {
        ++rear;
        front=0;
        a[rear] = num;
        cout << a[rear] << " inserted at index " << rear << endl;
    } else if (rear != max - 1) {
        ++rear;
        front = 0;
        a[rear] = num;
        cout << a[rear] << " inserted at index " << rear << endl;
    } else if(front>0){
        front--;
        a[front] = num;
        cout << a[front] << " inserted at index " << front << endl;
    } else{
        cout<<"Queue is full"<<endl;
    }
}

void Queue::deQueue() {
    if (isEmpty() == false) {
        cout << "deQueued value from Index: " << front << " is: " << a[front] << endl;
        ++front;
    } else {
        cout << "Queue is empty" << endl;
    }
}

void Queue::peek() {
    if (isEmpty()) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << a[0] << " First value in queue" << endl;
    }
}

void Queue::printAll() {
    if (isEmpty()) {
        cout << "Queue is Empty" << endl;
    } else {
        for (int i = 0; i <= rear; i++) {
            cout << a[i] << " is located at index: " << i << endl;
        }
    }
}


int main() {
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    cout << "Print All called" << endl;
    q.printAll();
    cout << "DeQueue called" << endl;
    q.deQueue();
    q.enQueue(8);
    q.printAll();

}
