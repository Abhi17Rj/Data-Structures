/*

You are given a binary string, (string which contains 0's and 1's), 
You have to perform several operations on this string, 
in one operation choose a non-empty even length substring containing only 0's or only 1's and remove it from the string.

Your goal is to minimize the final length of the string after performing several operations.
It is possible that the final string may become empty, in that case print "KHALI" without quotes.

And it can be proved that there is always an unique string with minimal length after performing the operations.

Input:
First line of input contains an intger T denoting number of testcases.
Next T lines of input contains a binary string S.

Output:
for each testcase print the required minimal string.

Constraints:
1 <= T <= 10
1 <= |S|  <= 105
 

SAMPLE INPUT 
2
101001
1001

SAMPLE OUTPUT 
10
KHALI

Explanation :
for the first test case, first remove substring "00", 
now string will become "1011", 
now remove "11", hence "10" will be the resulting string.

*/

#include <bits/stdc++.h>


std::string test(std::string str){
	std::stack<char> stck;
	for (int i=0; i<str.length(); ++i){
		if(stck.empty()){
			stck.push(str[i]);
		}
		else if (str[i] != stck.top()){
			stck.push(str[i]);
		} else {
			stck.pop();
		}
	}
	if (stck.empty()){
		return "KHALI";
	} else {
		std::string  res = "";
		while(!stck.empty()){
			res = stck.top() + res;
			stck.pop();
		}
		return res;
	}
}

int main (){
	int t;
	std::string s;
	
	std::cin >> t;
	while (t>0){
		std::cin >> s;
		std::string result = test(s);
		std::cout << result << "\n";
		t--;
	}

	return 0;
}
