#include <bits/stdc++.h>

void printArray(int arr[], int size){
	for(int i=0; i<size; ++i){
		std::cout << arr[i] << ", ";
	}
	std::cout << "\n";
	// Array is passed as value
}

void printArrayRef(std::vector <int> &vec){
	for(int x: vec){
		std::cout << x << ", ";
	}
	std::cout << "\n";
	// Array is passed as refrence
}

int main() {
	int arr[50]; // Static Array intialization
	
	std::vector<int> dynamicArray; // Dynamic Array intialization
	
	for(int i=0; i<30; ++i){
		arr[i] = i*2;
	} // Inserting values in Static Array
	
	dynamicArray.push_back(20);
	dynamicArray.push_back(40);
	// Inserting elements in dynamic array
	
	printArray(arr, 30);
	printArrayRef(dynamicArray);
	
	int arrSingle[] = {1, 2, 3};
	int arrMullti[][2] = {{1,2}, {3,4}};
	
} 
