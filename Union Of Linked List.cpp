// GFGs solution
// Practice section -> LinkedList -> Union Of two linked List

struct node* makeUnion(struct node* head1, struct node* head2)
{

    map<int, int> ump;
    while(head1!=NULL)
    {
        ump[head1->data]++;
        head1 = head1->next;
    }
     while(head2!=NULL)
    {
        ump[head2->data]++;
        head2 = head2->next;
    }
    vector<int> v;

    for(auto h1 = ump.begin(); h1!=ump.end(); h1++)
    {
     v.push_back(h1->first);
    }

    sort(v.begin(), v.end());
    for(int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return NULL;
}
