/*
 * find last Kth element 
 */
#include "List.h"

ListNode* findLastK(ListNode* head, int k)
{
    if(k < 0)
      throw std::runtime_error("invalid input");
    ListNode *p1 = head, *p2 = head;
    for(int i = 0; i< k; ++i)
    {
        if(p1 == NULL)
          throw std::runtime_error("list is shorter than k");
        p1 = p1->next;
    }
    while(p1!=NULL)
    {
        p1 = p1->next;
        p2 = p2->next;
    }
    return p2;
}
