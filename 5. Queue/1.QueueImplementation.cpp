#include<iostream>
#include<cstdlib>
#include<queue>

class Node {
	public:
		int data;
		Node* link;
};

void print(Node* temp){
	while(temp != NULL){
		std::cout << temp->data << ", ";
		temp = temp->link;
	}
	std::cout << "\n";
}

void insert(Node** head, int data){
	Node* newNode = new Node();
	newNode->data = data;
	if(*head == NULL){
		newNode->link = *head;
		*head = newNode;
		return;
	}
	Node* temp = *head;
	while(temp->link != NULL){
		temp = temp->link;
	}
	temp->link = newNode;
	newNode->link = NULL;
}

void pop(Node** head){
	Node* temp = *head;
	*head = temp->link;
	free(temp);
}

int main(){
	
	// C++ Stack implementation
	
	std::queue<int> q;
	
	q.push(3);
	q.push(2);
	q.push(1);
	int size = q.size();
	
	if(!stck.empty()){
        for(int i = 0; i < size; i++){

            // Get value with top
            std::cout << stck.top() << ", ";

            // Delete last value entered
            stck.pop();
        }
    }
	std::cout << "\n";
	
	// Linked List implementation of Stack
	
	Node* head = NULL;
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	print(head);
	pop(&head);
	print(head);
	
	return 0;
}
