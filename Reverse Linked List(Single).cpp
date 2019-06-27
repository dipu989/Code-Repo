#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
};

void Display(struct Node *head)
{
  while(head!=NULL)
  {
    cout<<head->data<<" ";
    head = head->next;
  }
}

int main()
{
  struct Node *head = new Node();
  struct Node *last = head;
  struct Node *temp;

  head -> data = 1;
  head -> next = NULL;

  struct Node *t;
  int i = 2;
  int flag = 1;
  while(flag)
  {
    t = new Node();
    last->next = t;
    last = t;
    t->data = i;
    t->next = NULL;
    i++;
    cout<<"Do you want to add data again?"<<endl;
    cin>>flag;
  }
  temp = head;

  Display(temp);

  cout<<"\n"<<"Reversing elements"<<endl;
  struct Node *p, *q, *r;
  p = head;
  q = NULL;
  r = NULL;
  while(p!=NULL)
  {
    r = q;
    q = p;
    p = p->next;
    q ->next = r;
  }
  Display(q);
  return 0;
}
