/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 13
 * Questions: Project 2 
 * Description: Write a recursive program that solves combinations 
*/

#include<iostream>
using namespace std;

int combination(int n, int r);
int factorial(int n);

int main(){
	cout << "The factorial of 4 is " << factorial(4) << endl;
	cout << "c(5, 2) is equal to " << combination(5, 2) << endl;
	return 0;
}

// n!/(r!*(n-r)!)
int combination(int n, int r){
	return factorial(n) / (factorial(r) * factorial(n - r));
}

int factorial(int n){
	if(n == 1){
		return 1;
	} else {
		return factorial(n - 1) * n; 
	}
}
