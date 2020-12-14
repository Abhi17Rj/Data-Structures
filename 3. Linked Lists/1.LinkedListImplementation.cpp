#include <bits/stdc++.h>

class Node {
	public :
		int data;
		Node* link;
};

void printLinkedList(Node *temp){
	while(temp != NULL){
		std::cout << temp->data << ", ";
		temp = temp->link;
	}
	std::cout << "\n";
}

void addNodeBeg(Node** head){
	int data;
	std::cout << "Enter Node Data: ";
	std::cin >> data;
	Node* newNode = new Node();
	newNode->data = data;
	newNode->link = *head;
	*head = newNode; 
}

void addNodeEnd(Node** head){
	int data;
	std::cout << "Enter node data: " ;
	std::cin >> data;
	
	Node* newNode = new Node();
	newNode->data = data;
	newNode->link = NULL;
	
	Node* temp = *head;
	while(temp->link != NULL){
		temp = temp->link;
	}
	temp->link = newNode;	
}

void addNodeBetween(Node** head){
	int data, pos;
	std::cout << "Enter node data: " ;
	std::cin >> data;
	std::cout << "Enter node pos (0 based index): " ;
	std::cin >> pos;
	
	Node* newNode = new Node();
	newNode->data = data;
	
	if(pos == 0){
		newNode->link = *head;
		*head = newNode;
		return;
	}
	
	Node* temp =*head;
	while(temp->link != NULL and pos>1){
		temp = temp->link;
		--pos;
	}
	newNode->link = temp->link;
	temp->link = newNode;
	return;
}

void deleteNode(Node** head){
	int pos;
	std::cout << "Enter position of Node to be deleted : ";
	std::cin >> pos;
	Node* temp = *head;
	if(pos == 0){
		*head = temp->link;
		free(temp);
		return;
	}
	Node *prev;
	while(temp->link != NULL and pos>0){
		prev = temp;
		temp = temp->link;
		--pos;
	}
	prev->link = temp->link;
	free(temp);
	return;
}

int main (){
	Node *head = NULL;
	addNodeBeg(&head);
	addNodeBeg(&head);
	printLinkedList(head);
	addNodeEnd(&head);
	printLinkedList(head);
	addNodeBetween(&head);
	printLinkedList(head);
	deleteNode(&head);
	printLinkedList(head);
	return 0;
}
