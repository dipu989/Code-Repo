// Implementation of Queue DS

#include<bits/stdc++.h>
using namespace std;

struct Queue{
  int size;
  int front;
  int rear;
  int *Q;
};

void enqueue(Queue *q, int x)
{
  if(q->rear == q->size-1)
  {
    cout<<"Queue is full"<<endl;
  }
  else{
    q->rear++;
    q->Q[q->rear] = x;
  }

}

int dequeue(Queue *q)
{
  int x = -1;
  if(q->front == q->rear)
    {
      cout<<"Queue is empty"<<endl;
    }
    else
    {
      q->front++;
      x = q->Q[q->front];
    }
    return x;
}

void printQueue(Queue *q)
{
  if(q->front == q->rear)
    cout<<"Queue is empty"<<endl;
  else
  {
    for(int i = q->front+1; i<=q->rear; i++)
      cout<<q->Q[i]<<" ";
  }
}
int main()
{

struct Queue q;
cout<<"Enter size of Queue"<<endl;
cin>>q.size;
q.Q = new int[q.size];
q.front = -1;
q.rear = -1;

enqueue(&q,1);
enqueue(&q,2);
enqueue(&q,3);
enqueue(&q,4);
enqueue(&q,5);
enqueue(&q,6);

dequeue(&q);
dequeue(&q);

printQueue(&q);
  return 0;
}
