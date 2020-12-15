#include<iostream>
#include<cstdlib>
#include<stack>

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

void push(Node** head, int data){
	Node* newNode = new Node();
	newNode->data = data;
	newNode->link = *head;
	*head = newNode;
}

void pop(Node** head){
	Node* temp = *head;
	*head = temp->link;
	free(temp);
}

int main(){
	
	// C++ Stack implementation
	
	std::stack<int> stck;
	
	stck.push(3);
	stck.push(2);
	stck.push(1);
	int size = stck.size();
	
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
