/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 1
 * Questions: Project 3
 * Description: Write a program that determines take home pay depending on hours worked and number of dependents. 
**/

#include<iostream>
using namespace std;

int main(){
	const float SS_TAX = 0.6;
	const float FEDERAL_INCOME_TAX = 0.14;
	const float STATE_TAX = 0.05;
	const float UNION_DUES = 10.0;
	const float HEALTH_INSURANCE = 35.0;
	const float HOURLY_RATE = 16.78;
	int dependents;
	float hoursWorked, grossPay, netPay, overtimeHours;
	cout << "How many hours did you work this week?: ";
	cin >> hoursWorked;
	cout << "How many dependents do you have?: ";
	cin >> dependents;
	if(hoursWorked <= 40){
		grossPay = hoursWorked * HOURLY_RATE;
	} else {
		overtimeHours = hoursWorked - 40;
		grossPay = (overtimeHours * (1.5 * HOURLY_RATE)) + (40 * HOURLY_RATE);
	}
	netPay = grossPay - (grossPay * SS_TAX) - (grossPay - FEDERAL_INCOME_TAX) - (grossPay * STATE_TAX) - (grossPay - UNION_DUES);
	if(dependents >= 3){
		netPay = netPay - HEALTH_INSURANCE;
	}
	cout << "Your weekly take home is $" << netPay << ".\n";
	return 0;
}
