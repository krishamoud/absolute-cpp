/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 6 
 * Questions: create a counter class 
*/

#include<iostream>
using namespace std;

class CounterType{
	private:
		int count;
	public:
		void setCount(int n);
		void increment();
		void decrement();
		void getCount();
};

void CounterType::setCount(int n){
	if(n >=0){
		count = n;
	} else {
		cout << "Must be a non negative number!\n";
	}
}

void CounterType::increment(){
	count++;
}

void CounterType::decrement(){
	if(count > 0){
		count--;	
	} else {
		cout << "Count is already at 0!\n";
	}
}

void CounterType::getCount(){
	cout << "The current count is " << count << ".\n";
}

int main(){
	CounterType count;
	count.setCount(0);
	count.getCount();
	count.increment();
	count.getCount();
	count.setCount(-1);
	count.getCount();
	count.decrement();
	count.getCount();
	count.decrement();
	for(int i = 0; i < 100; i++){
		count.increment();
	}
	count.getCount();
	return 0;
}
