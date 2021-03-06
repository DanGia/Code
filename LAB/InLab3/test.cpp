#include <iostream>
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
void replace(node *head, int position, int value)
{
    // TODO
    node *p = head;
    int index = position;
}
void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
int main()
{
    int n = 0;
    cin >> n;
    node *head = createLinkedList(n);
    print(head);
    int pos, val;
    cin >> pos >> val;
    replace(head, pos, val);
    print(head);
    return 0;
}
