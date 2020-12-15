/*

 A and B are playing a game. 
 In this game, both of them are initially provided with a list of n numbers. 
 (Both have the same list but their own copy).

Now, they both have a different strategy to play the game.
A picks the element from start of his list. 
B picks from the end of his list.

You need to generate the result in form of an output list.

Method to be followed at each step to build the output list is:

If the number picked by A is bigger than B then this step's output is 1 . 
B removes the number that was picked from their list.

If the number picked by A is smaller than B then this step's output is 2 . 
A removes the number that was picked from their list.

If both have the same number then this step's output is 0 . 
Both A and B  remove the number that was picked from their list.

This game ends when at least one of them has no more elements to be picked i.e. when the list gets empty.

Output the built output list.
  

Input format:

First line consists of a number n , size of the list provided.
Next line consists of n numbers separated by space.


Output format:

Output the required output list.

 

SAMPLE INPUT 
3
1 2 3

SAMPLE OUTPUT 
2 2 0

Explanation
1st step: A picks 1. B picks 3. B > A. So output is 2. A removes 1.
2nd step: A picks 2. B picks 3. B > A. So output is 2. A removes 2.
3rd step: A picks 3. B picks 3. B = A. So output is 0. A removes 3. B removes 3.

Output list: [2, 2, 0]

*/


// Solution








//

/*

Hardik and Sanket are two coding legends who played a crucial part in improving the competitive programming culture in Nirma. 
As a matter of legacy, the same thing was passed on to next batch with more strength. 
In order to test the current scenario at Nirma, they asked the following problem:

You are given an array A having N distinct elements. 
You can select any contiguous subarray of length greater than 1. 
The star value of a subarray is the bitwise OR of the smallest and second smallest element in that subarray. 
You need to find the maximum star value that can be obtained among all the subarrays of the array.


Input Format

The first line contains the number of test cases T.

Each test case is as follows:

The first line contains N, the number of elements.

The second line has N space seperated integers Ai.


Output Format

For each testcase, output a single line containing the maximum star value that can be obtained from a subarray of the given array.


Constraints

1 <= T <= 10

2 <= N <= 106

1 <= L < R  < N

1 <= Ai <= 109


Note: It is guranteed that T*N will not be greater than 106.


SAMPLE INPUT 
1
4
1 2 3 4


SAMPLE OUTPUT 
7


Explanation
For subarray [3,4], minimum element is 3 and second minimum is 4, whose BITWISE OR is 7 (3 OR 4), 
which is the maximum possible value among all the subarrays.

*/


// Solution






// Source : HackerEarth
