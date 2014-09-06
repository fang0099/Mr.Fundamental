#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdexcept>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

ListNode* makeList()
{
    int value;
    ListNode *head, *tail, *node;
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

#endif
