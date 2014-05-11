/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 10
 * Questions: Self Test
*/

#include<iostream>
using namespace std;

int main(){
	/* -- Question 1 Begin -- */
	//a pointer is a variable that points to an address in memory
	/* -- Question 1 End -- */

	/* -- Question 2 Begin -- */
	//* can be used as a multiplaction sign
	//* can be used to define a pointer
	//* can be used to dereference a pointer
	/* -- Question 2 End -- */

	/* -- Question 3 Begin -- 
	int *p1, *p2;
	p1 = new int;
	p2 = new int;
	*p1 = 10;
	*p2 = 20;
	cout << *p1 << " " << *p2 << endl;
	p1 = p2;
	cout << *p1 << " " << *p2 << endl;
	*p1 = 30;
	cout << *p1 << " " << *p2 << endl;
	 -- Question 3 End -- */

	/* -- Question 4 Begin -- */
	int *p1, *p2;
	p1 = new int;
	p2 = new int;
	*p1 = 10;
	*p2 = 20;
	cout << *p1 << " " << *p2 << endl;
	*p1 = *p2; //This is different from Exercise 4
	cout << *p1 << " " << *p2 << endl;
	*p1 = 30;
	cout << *p1 << " " << *p2 << endl;
	/* -- Question 4 End -- */

	return 0;
}
