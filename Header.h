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

//function for_remove elememt from start
void delete_from_front(Node** head) 
{
    if (*head == nullptr) 
    {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = *head;
    *head = (*head)->next;
    delete temp;
}


//function for remove elememt from end

void delete_from_end(Node** head) 
{
    if (*head == nullptr) 
    {
        cout << "List is empty." << endl;
        return;
    }

    
    Node* prev = nullptr;
    Node* current = *head;

    while (current->next != nullptr) 
    {
        prev = current;
        current = current->next;
    }

    delete current;
    prev->next = nullptr;
}
void display(Node* n)
{
    while (n != NULL)
    {
        cout << n->value << endl;
        n = n->next;
    }
}
