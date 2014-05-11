/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 13
 * Questions: Self Test
*/

#include<iostream>
using namespace std;

void cheers(int n);
void stars(int n);
void reverse(int n);
void list(int n);
void listReverse(int n);
void iterativeCheers(int n);
void iterativeStars(int n);
void iterativeReverse(int n);
void iterativeList(int n);
void iterativeReverseList(int n);

int main(){
	/* -- Question 1 Begin -- */
	cheers(3);	
	/* -- Question 1 End -- */

	/* -- Question 2 Begin -- */
	stars(10);
	/* -- Question 2 End -- */

	/* -- Question 3 Begin -- */
	reverse(1234);
	/* -- Question 3 End -- */

	/* -- Question 4 Begin -- */
	list(5);
	cout << endl;
	/* -- Question 4 End -- */

	/* -- Question 5 Begin -- */
	listReverse(6);
	/* -- Question 5 End -- */

	/* -- Question 6 Begin -- */
	//It is likely that the call was infinite recursion
	/* -- Question 6 End -- */

	/* -- Question 7 Begin -- */
	iterativeCheers(2);
	/* -- Question 7 End -- */

	/* -- Question 8 Begin -- */
	iterativeStars(10);
	/* -- Question 8 End -- */
	
	/* -- Question 9 Begin -- */
	iterativeReverse(1234);
	/* -- Question 9 End -- */

	/* -- Question 10 Begin -- */
	iterativeList(5);
	/* -- Question 10 End -- */

	/* -- Question 11 Begin -- */
	iterativeReverseList(6);
	/* -- Question 11 End -- */

	return 0;
}

void iterativeReverseList(int n){
	for(int i = n; i > 0; i--){
		cout << i;
	}
	cout << endl;
}

void iterativeList(int n){
	for(int i = 1; i <= n; i++){
		cout << i;
	}
	cout << endl;
}

void iterativeReverse(int n){
	for(int i = n; i > 0; i/=10){
		cout << i%10;
	}
	cout << endl;
}
void iterativeStars(int n){
	for(int i = 0; i < n; i++){
		cout << "*";
	}
	cout << endl;
}
void iterativeCheers(int n){
	for(int i = 0; i < n; i++){
		cout << "Hip ";
	}
	cout << "Hooray!\n";
}

void listReverse(int n){
	if(n == 1){
		cout << n << endl;
	} else {
		cout << n;
		listReverse(n - 1);
	}
}
void list(int n){
	if(n >= 1){
		list(n - 1);
		cout << n;
	} 
}
void reverse(int n){
	if(n < 10){
		cout << n%10 << endl;
	} else {
		cout << n%10;
		reverse(n/10);
	}
}

void stars(int n){
	if(n == 1){
		cout << "*\n";
	} else {
		cout << "*";
		stars(n-1);
	}
}

void cheers(int n){
	if(n == 1){
		cout << "Hooray!\n";
	} else {
		cout << "Hip ";
		cheers(n-1);
	}
}
