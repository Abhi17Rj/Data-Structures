#include <cstdlib>
#include <iostream>

class Node {
	public:
		int data;
		Node* link;
};

void printNode (Node* temp) {
	if(temp != NULL){
		std::cout << temp->data << ", ";
		printNode(temp->link);
	}
	std::cout << "\n ";
	return;
}
void addNode(Node** headAdd, int data) {

	Node* newNode = new Node();
	newNode->data = data;
	newNode->link = NULL;
	Node* temp = *headAdd;
	
	if(*headAdd == NULL){
		*headAdd = newNode;
		return;
	}
	
	while(temp->link != NULL){
		temp = temp->link;
	}
	temp->link = newNode;
	return;		
}
void reverseLL(Node** headAdd){
	
	Node* curr, *prev = NULL, *next = NULL;
	curr = *headAdd;
	while (curr){
		next = curr->link;
		curr->link = prev;
		prev = curr;
		curr = next;
	}
	*headAdd = prev;
	return;
}

int main () {
	
	Node* head = NULL;
	
	addNode(&head, 2);
	addNode(&head, 4);
	addNode(&head, 6);
	addNode(&head, 8);
	addNode(&head, 10);
	
	printNode(head);
	
	reverseLL(&head);
	
	printNode(head);
	
	return 0;
}
