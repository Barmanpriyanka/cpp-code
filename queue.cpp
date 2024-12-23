#include <iostream>
#include <stack>
using namespace std;

const int MAX_SIZE = 100;

class Queue {
  private: 
  int front;
  int rear;
  int arr[MAX_SIZE];
  public: Queue() {
    front = -1;
    rear = -1;
  }
  bool isFull() {
    return (rear == MAX_SIZE - 1);
  }
  bool isEmpty() {
    return (front == -1 && rear == -1);
  }
  void enqueue(int x) {
    if (isFull()) {
      cout << "Error: Queue is full" << endl;
      return;
    }
    if (isEmpty()) {
      front = 0;
      rear = 0;
    } else {
      rear++;
    }
    arr[rear] = x;
  }
  void dequeue() {
    if (isEmpty()) {
      cout << "Queue is empty" << endl;
      return;
    }
    if (front == rear) {
      front = -1;
      rear = -1;
    } else {
      front++;
    }
  }
  int peek() {
    if (isEmpty()) {
      cout << " Queue is empty" << endl;
      return -1;
    }
    return arr[front];
  }
  void display() {
    if (isEmpty()) {
      cout << " Queue is empty" << endl;
      return;
    }
    cout << "Queue elements are: ";
    for (int i = front; i <= rear; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  int sum_Queue(Queue & q) {
    if (q.isEmpty()) {
      cout << " Queue is empty" << endl;
      return 0;
    }
    int sum = 0;
    for (int i = q.front; i <= q.rear; i++) {
      sum += q.arr[i];
    }
    return sum;
  }
};

int main() {
  
  Queue q;
  cout << "some elements into the queue" << endl;
  q.enqueue(1);
  q.enqueue(5);
  q.enqueue(3);
  q.enqueue(6);
  q.enqueue(2);
  q.enqueue(0);
  q.display();
  int sum_q = q.sum_Queue(q);
  cout << sum_q;
  cout <<endl;
  return 0;
}




