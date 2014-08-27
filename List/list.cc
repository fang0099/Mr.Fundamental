struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int value):val(value),next(NULL){}
};

ListNode* createList()
{
    int value = 0;
    ListNode* head, *tail, *node;
    if(scanf("%d",&value)==1)
    {
        head = new ListNode(value);
        tail = head;
    }
    while(scanf("%d",&value)==1)
    {
        node = new ListNode(value);
        tail->next = node;
        tail = tail->next;
    }

    return head;
}
