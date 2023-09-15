#include"Header.h"

int main() 
{

	Node* head=new Node();//just allocate space for node
	Node* second = new Node();
	Node* third = new Node();


	head->value = 100;
	head->next = second;
	second->value = 200;
	second->next = third;

	third->value = 300;
	third->next = NULL;
	display(head);

	insertatfront(&head,-1);
	insertatend(&head, 1000);

	display(head);



	return 0;
}