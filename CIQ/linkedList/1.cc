/*
 * check two linked lists have ovelapped part.
 */
bool CheckOverlapped(ListNode* head1, ListNode* head2)
{
    if(head1 == NULL || head2 == NULL)
      return false;
    ListNode *tail1 = NULL, *tail2 = NULL;
    ListNode *p1 = head1, *p2 = head2;
    while(p1->next!=NULL)
    {
        p1 = p1->next;
    }
    tail1 = p1;
    while(p2->next!=NULL)
    {
        p2 = p2->next;
    }
    tail2 = p2;

    if(tail1 == tail2)
    {
        return true;
    }
    return false;
}
