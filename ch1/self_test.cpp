/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 1
 * Questions: Self Test
*/

#include<iostream>
using namespace std;

int main(){

	/* -- Question 1 Begin -- */	
	//Part A
	//int feet = 0, inches = 0;
	//Part B
	//int feet(0), inches(0);
	//cout << feet << " " << inches << endl;	
	/* -- Question 1 End -- */

	/* -- Question 2 Begin -- */
	//Part A
	//int count = 0;
	//double distance = 1.5;
	//Part B
	//int count(0);
	//double distance(1.5);
	//cout << count << "\n" << distance << "\n";	
	/* -- Question 2 End -- */

	/* -- Question 3 Begin -- */
	//int one, two, three, four, five, six;
	//cout << one << " " << two << " " << three << " " << four << " " << five << " " << six << endl;
	/* -- Question 3 End -- */
	
	/* -- Question 4 Begin -- */
	//int x, y, z;
	//3 * x == 3x
	//(3 * x) + y == 3x + y
	//(x + y) / 7 (self explanatory
	//((3 * x) + y) / (z + 2)
	/* -- Question 4 End -- */
	
	/* -- Question 5 Begin -- */
	//char a = 'a', b = 'b', c = 'c';
	//cout << a << b << c << 'c' << endl; //outputs abcc
	/* -- Question 5 End -- */

	/* -- Question 6 Begin -- */
	//int number = (1/3) * 3;
	//cout << "(1/3) * 3 is equal to " << number << endl;
	/* -- Question 6 End -- */
	
	/* -- Question 7 Begin -- */
	//int numOne, numTwo;
	//cout << "Enter a number: ";
	//cin >> numOne;
	//cout << "Enter another number: ";
	//cin >> numTwo;
	//cout << "Number 1 divided by number 2 is equal to " << (numOne / numTwo) << endl;
	//cout << "The remainder of number 1 divided by number 2 is equal to " << (numOne % numTwo) << endl;
	/* -- Question 7 End -- */

	/* -- Question 8 Begin -- */
	//double c = 20;
	//double f;
	//f = (9/5) * c + 32.0;
	//Part A
	//cout << f << endl; //f is assigned 52.  Incorrect.
	//Part B
	/*
	 * The program is dividing by two integers which is causing the expression to be read as 1 * 20 + 32.0 == 52
	 * The programmer likely wanted to divide 9.0 by 5.0 in order to get a float. 
	 * */
	//Part C
	//f = (9.0/5.0) * c + 32.0;
	//cout << f << endl; //f is assigned 68.  Correct.
	/* -- Question 8 End -- */
	
	/* -- Question 9 Begin -- */
	//cout << "The answer to the question of\n"
	//		 << "Life, the Universe, and Everything is 42.\n";
	/* -- Question 9 End -- */

	/* -- Question 10 Begin -- */
	//int theNumber;
	//cout << "Please enter a number: ";
	//cin >> theNumber;
	//cout << "Your number is " << theNumber << endl;
	/* -- Question 10 End -- */

	/* -- Question 11 Begin -- */
	//cout.setf(ios::fixed);
	//cout.setf(ios::showpoint);
	//cout.precision(3);
	/* -- Question 11 End -- */

	/* -- Question 12 Begin -- */
	//cout << "Hello, World!" << endl;
	/* -- Question 12 End -- */

	/* -- Question 13 Begin -- */
	//cout << 'A' << '\n' << 'B' << '\t' << 'C' << endl;
	/* -- Question 13 End -- */
	return 0;
}
