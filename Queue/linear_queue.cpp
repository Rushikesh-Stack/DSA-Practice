#include<iostream>
using namespace std;

struct Queue {
    int size;
    int front;
    int rear;
    int *arr;
};

int isFull(Queue* q) 
{
    return (q->rear == q->size - 1);
}

int isEmpty(Queue* q) {
    return (q->front == -1 || q->front > q->rear);
}

void enqueue(struct Queue* q, int val) 
{
    if (isFull(q)) 
    {
        cout << "Queue Overflow\n";
    } else 
    {
        if (q->front == -1) 
        { // first insertion
            q->front = 0;
        }
        q->rear++;
        q->arr[q->rear] = val;
    }
}

int dequeue(struct Queue* q)
{
    int a=-1;
    if(isEmpty(q))
    {
        cout<<"Queue Underflow\n";
    }
    else{
        a=q->arr[q->front];  // store the value being deleted
        cout<< a <<"\tdeleted from queue.....\n";
        q->front=q->front+1;

        // Reset when queue becomes empty
        if (q->front > q->rear) 
        {
            q->front = q->rear = -1;
        }
    }

    return a;
}

void traverse(struct Queue q) 
{
    if (q.front == -1 || q.front > q.rear) 
    {
        cout << "Queue is empty. Traversal not possible\n";
        return;
    }
    cout << "Elements in Queue:\n";
    for (int i = q.front; i <= q.rear; i++) 
    {
        cout << q.arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    struct Queue q;
    q.size = 100;
    q.front = q.rear = -1;
    q.arr = new int[q.size];

    isEmpty(&q);
    enqueue(&q, 12);
    enqueue(&q, 23);
    enqueue(&q, 32);
    enqueue(&q, 1209);

    traverse(q);

    dequeue(&q);
    traverse(q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    traverse(q);

    delete[] q.arr; // free memory
    return 0;
}