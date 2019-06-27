// This code contains driver function for reversal of doubly linked list.


struct node*update(struct node*start,int p)
{
    struct node *ptr,*ptr1;
    ptr = start;
    ptr1 = start;
    if(start==NULL||start->next==NULL){
    return start;
    }
    while(ptr1->next)
    {
        ptr1 = ptr1->next;
    }
    ptr1->next = start;
    ptr->prev = ptr1;
    while(p--)
    {
        start = start->next;
    }
    ptr = start->prev;
    ptr->next = NULL;
    start->prev = NULL;
    return start;
}
