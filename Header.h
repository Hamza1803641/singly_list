#include<iostream>
using namespace std;

class Node
{
public:

    int value;
    Node* next;
};
void insertatfront(Node** head,int newvalue)
{
    //prepare new node
    Node* newnode = new Node();
    newnode->value = newvalue;
    //now we put it front of head
   newnode->next= *head;
   //move head st front of list
   *head = newnode;
}
void insertatend(Node** head, int newvalue)
{
    //prepare new node
    Node* newnode = new Node();
    newnode->value = newvalue;
    newnode->next = NULL;
    //cheak if null (only one element in list)
    if (*head == NULL)
    {
        *head = newnode;
        return;
    }
    // if not only one element in list then
    Node* last = *head;
    while (last->next!=NULL)
    {
        last = last->next;

    }
    last->next = newnode;



}

void insertafter(Node** previous, int newvalue)
{
    //cheak if previous is null
    if (previous == NULL)
    {
        cout << "previous is null " << endl;
      return;
    }
    //prepare new node
    Node* newnode = new Node();
    newnode->value = newvalue;

    //now we give 
    newnode->next = previous->next;
    previous->next = newnode;
}


void display(Node* n)
{
    while (n != NULL)
    {
        cout << n->value << endl;
        n = n->next;
    }
}