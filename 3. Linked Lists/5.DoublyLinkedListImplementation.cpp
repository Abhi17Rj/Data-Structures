#include <cstdlib>
#include <iostream>

class Node {
	public:
		Node* prev;
		int data;
		Node* next;
};

void printNode (Node* temp, Node** headAdd) {
	while(temp != NULL){
		std::cout << temp->data << ", ";
		temp = temp->next;
	}
	std::cout << "\n \n";
	return;
}

void addNode(Node** headAdd) {
	
	int data;
	std::cout << "Enter Node data : ";
	std::cin >> data;
	Node* newNode = new Node();
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	
	if (*headAdd == NULL) {
		*headAdd = newNode;
		return;
	}
	Node* temp = *headAdd;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
	return;
	
	return;		
}

void delNode (Node** headAdd){
	
	if(*headAdd == NULL){
		std::cout << "Nothing to delete \n";
	}
	std::cout << "Enter position of node to be deleted : ";
	int pos;
	std::cin >> pos;
	
	Node* temp = *headAdd;
	
	if (pos == 0) {
		*headAdd = temp->next;
		temp->next->prev = NULL;
		free(temp);
		return;
	}
	while ((pos > 0)and(temp->next != NULL)){
		temp = temp->next;
		pos--;
	}
	if (pos != 0){
		std::cout << "\nFailed : Node does not exist \n";
		return;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return;
}


int main () {
	
	Node* head = NULL;
	
	std::cout << "1 Add Node \n 2 Delete Node \n 3 Print the node \n 4 EXIT \n \n";
	int n;
	do{
		std::cout << "\n Enter Choice : ";
		std::cin >> n;
		switch (n) {
			case 1:
				addNode(&head);
				break;
			case 2:
				delNode(&head);
				break;
			case 3:
				printNode(head, &head);
				break;
			case 4:
				std::cout << "Exited !!!!";
				break;
			default:
				std::cout << "Invalid Entry \n Try Again";
				break;
		}
	}
	while(n != 4);
	
	return 0;
}
