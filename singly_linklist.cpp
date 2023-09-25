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
	third->next =forth ;
       forth->value = 400;
	forth->next = NULL;
	
	display(head);

	front_list(head);
	back_list(&head);

	list_size(head);

	
	delete_from_front(&head);
	display(head);
	delete_from_end(&head);
       display(head);

	emp=isempty(head);
         if(emp==true)
		 cout<<"The list is empty "<<endl;
	
	insertatfront(&head,-1);
	insertatend(&head, 1000);

	display(head);



	return 0;
}
