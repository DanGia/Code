#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *pushback(node *&head, int x)
{
    node *p = new node;
    p->data = x;
    p->next = head->next;
    head->next = p;
    return p;
}
node *createLinkedList(int n)
{
    // TO DO
    node *head = new node;
    node *cur = new node;
    node *pre = new node;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            head->data = x;
            head->next = nullptr;
            cur = head;
        }
        else
        {
            cur = pushback(cur, x);
        }
    }
    return head;
}