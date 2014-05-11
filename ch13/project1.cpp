/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 13
 * Questions: Project 1 
 * Description: Write a recursive program that returns the nth fibonacci number
*/

#include<iostream>
using namespace std;

int fib(int n);

int main(){
	cout << fib(4) << endl;
	return 0;
}

int fib(int n){
	if(n <= 1){
		return 1;
	} else {
		return fib(n - 1) + fib(n - 2);
	}
}
