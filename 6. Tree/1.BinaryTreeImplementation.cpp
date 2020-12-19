#include <bits/stdc++.h>

class Node {
	public:
		int data;
		Node* left;
		Node* right;
};

void inOrder(Node* temp){
	if(temp == NULL){
		return;
	}
	inOrder(temp->left);
	std::cout << temp->data << ", ";
	inOrder(temp->right);
	return;
}
void preOrder(Node* temp){
	if(temp == NULL){
		return;
	}
	std::cout << temp->data << ", ";
	preOrder(temp->left);
	preOrder(temp->right);
	return;
}
void postOrder(Node* temp){
	if(temp == NULL){
		return;
	}
	postOrder(temp->left);
	postOrder(temp->right);
	std::cout << temp->data << ", ";
	return;
}

void insert(Node** add, int data){
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	*add = newNode;
	return;
	
}

int main(){
	Node *head = NULL;
	insert(&head, 1);
	insert(&head->left, 2);
	insert(&head->right, 3);
	insert(&head->left->right, 8);
	insert(&head->left->left, 11);
	inOrder(head);
	std::cout << "\n";
	preOrder(head);
	std::cout << "\n";
	postOrder(head);
	return 0;
}
