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

int main (){
	Node *head = NULL;
	addNodeBeg(&head);
	addNodeBeg(&head);
	addNodeEnd(&head);
	printLinkedList(head);
	return 0;
}
