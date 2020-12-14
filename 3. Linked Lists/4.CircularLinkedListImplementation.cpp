#include <bits/stdc++.h>

class Node {
	public:
		int data;
		Node* link;
};

void printNode (Node* temp, Node** headAdd) {
	while(temp->link != *headAdd){
		std::cout << temp->data << ", ";
		temp = temp->link;
	}
	if(temp != NULL){
		std::cout << temp->data;
	}
	std::cout << "\n \n";
	return;
}

void addNode(Node** headAdd) {
	
	std::cout << "\nEnter Node data : ";
	int data;
	std::cin >> data;
	Node* newNode = new Node();
	newNode->data = data;
	newNode->link = NULL;
	Node* temp = *headAdd;
	
	if(*headAdd == NULL){
		*headAdd = newNode;
		newNode->link = *headAdd;
		std::cout << "\nNode Successfully Inserted \n ";
		return;
	}
	
	while(temp->link != *headAdd){
		temp = temp->link;
	}
	temp->link = newNode;
	newNode->link = *headAdd;
	std::cout << "\nNode Successfully Inserted \n ";
	return;		
}

void delNode (Node** headAdd){
	
	if(*headAdd == NULL){
		std::cout << "Nothing to delete \n";
		return;
	}
	int pos;
	std::cout << "\n Enter the position of the node to delete : ";
	std::cin >> pos;
	Node* temp = *headAdd;
	if(pos == 0){
		*headAdd = temp->link;
		free(temp);
		std::cout << "\nNode Successfully deleted. \n";
		return;
	}
	Node* prev;
	
	while((pos>=1)and(temp->link != *headAdd)){
		prev = temp;
		temp = temp->link;
		pos--;
	}
	if (pos != 0){
		std::cout << "\nFailed : Node does not exist \n";
		return;
	}
	prev->link = temp->link;
	free(temp);
	std::cout << "\nNode Successfully deleted. \n";
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
