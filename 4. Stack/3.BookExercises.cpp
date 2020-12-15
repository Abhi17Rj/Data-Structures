/*

Harry is a bright student. 
To prepare thoroughly for exams, he completes all the exercises in his book! 
Now that the exams are approaching fast, 
he is doing book exercises day and night. 
He writes down and keeps updating the remaining number of exercises on the back cover of each book.

Harry has a lot of books messed on the floor. 
Therefore, he wants to pile up the books that still have some remaining exercises into a single pile. 
He will grab the books one-by-one and add the books that still have remaining exercises to the top of the pile.

Whenever he wants to do a book exercise, 
he will pick the book with the minimum number of remaining exercises from the pile. 
In order to pick the book, he has to remove all the books above it. 
Therefore, if there are more than one books with the minimum number of remaining exercises, 
he will take the one which requires the least number of books to remove. 
The removed books are returned to the messy floor. After he picks the book, 
he will do all the remaining exercises and trash the book.

Since number of books is rather large, 
he needs your help to tell him the number of books he must remove, 
for picking the book with the minimum number of exercises.

Note that more than one book can have the same name.

 

Input Format

The first line contains a single integer N denoting the number of actions. 
Then N lines follow. 
Each line starts with an integer. 
If the integer is -1, that means Harry wants to do a book exercise. 
Otherwise, the integer is number of the remaining exercises in the book he grabs next. 
This is followed by a string denoting the name of the book.

 

Output Format

For each -1 in the input, output a single line containing the number of books Harry must remove, 
followed by the name of the book that Harry must pick.

 

Constraints

1 < N = 1,000,000

0 = (the number of remaining exercises of each book) < 100,000

The name of each book consists of between 1 and 15 characters 'a' - 'z'.

Whenever he wants to do a book exercise, there is at least one book in the pile.


SAMPLE INPUT 
6
9 english
6 mathematics
8 geography
-1
3 graphics
-1

SAMPLE OUTPUT 
1 mathematics
0 graphics


*/

#include<bits/stdc++.h>

int getMin(std::stack<int> s){
	int min = s.top();
	while(!s.empty()){
		if(min > s.top()){
			min = s.top();
		}
		s.pop();
	}
	return min; 
}

int main(){
	int n, r;
	std::string str;
	std::stack<int> sInt;
	std::stack<std::string> sStr;
	std::vector<int> num;
	std::vector<std::string> st;
	std::cin >> n;
	while(n>0){
		std::cin >> r;
		if(r != -1){
			std::cin >> str;
			if(r != 0){
				sInt.push(r);
				sStr.push(str);
			}
		} else {
			int min = getMin(sInt);
			int count = 0;
			while(min != sInt.top()){
				sInt.pop();
				sStr.pop();
				count++;
			}
			num.push_back(count);
			st.push_back(sStr.top());
			sInt.pop();
			sStr.pop();
		}
		--n;
	}
	for(int i=0; i<num.size(); ++i){
		std::cout << num[i] << " " << st[i] << "\n";
	}

	return 0;
}
