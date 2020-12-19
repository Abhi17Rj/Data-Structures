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

void insert(Node** add){
	int data;
	std::cout << "Enter Node Data : ";
	std::cin >> data;
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	if(*add == NULL){
		*add = newNode;
		return;
	}
	
	Node* temp = *add;
	
	while(true){
		if(data < temp->data){
			if(temp->left == NULL){
				temp->left = newNode;
				break;
			} else {
				temp = temp->left;
			} 
		} else {
			if(temp->right == NULL){
				temp->right = newNode;
				break;
			} else {
				temp = temp->right;
			}
		}
	}
	return;
	
}

int main(){
	Node *head = NULL;
	insert(&head);
	insert(&head);
	insert(&head);
	insert(&head);
	insert(&head);
	insert(&head);
	insert(&head);
	inOrder(head);
	std::cout << "\n";
	preOrder(head);
	std::cout << "\n";
	postOrder(head);
	return 0;
}
