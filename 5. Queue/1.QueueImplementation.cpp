#include<iostream>
#include<cstdlib>
#include<queue>

class Node {
	public:
		int data;
		Node* link;
};

void printQ(std::queue<int> gq)
{
    std::queue<int> g = gq;
    while (!g.empty()) {
        std::cout << g.front() << ", ";
        g.pop();
    }
    std::cout << '\n';
}

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

void del(Node** head){
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
	
	printQ(q);
	std::cout << "\n";
	
	// Linked List implementation of Stack
	
	Node* head = NULL;
	insert(&head, 3);
	print(head);
	insert(&head, 2);
	print(head);
	insert(&head, 1);
	print(head);
	del(&head);
	print(head);
	
	return 0;
}
