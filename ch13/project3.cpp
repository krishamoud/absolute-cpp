/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 13
 * Questions: Project 3 
 * Description: Write a recursive program that reverses an array starting and ending at a specific point 
*/

#include<iostream>
using namespace std;

void reverse(char arr[], int start, int end);

int main(){
	char arr[] = {'A', 'B', 'C', 'D', 'E'};
	for(int i = 0; i < 5; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	reverse(arr, 1, 4);
	for(int i = 0; i < 5; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

void reverse(char arr[], int start, int end)
{
   int temp;
   if(start >= end)
     return;
   temp = arr[start];   
   arr[start] = arr[end];
   arr[end] = temp;
   reverse(arr, start+1, end-1);   
}
