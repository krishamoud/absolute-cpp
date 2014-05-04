/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 1
 * Questions: Project 1
 * Description: A metric ton is 35,273.92 ounces. 
 * 							Write a program that will read the weight of a package of
 * 							breakfast cereal in ounces and output the weight in metric tons as well as the number of 
 * 							boxes needed to yield one metric ton of cereal. 
*/

#include<iostream>
using namespace std;

int main(){
	const float METRIC_TON_OUNCES = 35273.92;
	float boxOfCereal;
	cout << "Enter the weight of a box of cereal (in ounces): ";
	cin >> boxOfCereal;
	cout << "That is " << (boxOfCereal / METRIC_TON_OUNCES) << " metric tons of cereal.\n";
	cout << "You would need " << (METRIC_TON_OUNCES / boxOfCereal) << " boxes to make 1 metric ton.\n";

	return 0;
}
