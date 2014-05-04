/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 1
 * Questions: Project 3
 * Description: Workers at a particular company have won a 7.6% pay increase retroactive for six months. 
 * 							Write a program that takes an employee’s previous annual salary as input and outputs the 
 * 							amount of retroactive pay due the employee, the new annual salary, and the new monthly 
 * 							salary. Use a variable declaration with the modifier const to express the pay increase.
*/

#include<iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	const float PAY_INCREASE = 1.076;
	float annualPay, sixMonthPay, newAnnualPay, owed, monthlySalary;
	cout << "How much was your salaray last year?: ";
	cin >> annualPay;
	sixMonthPay = 0.5 * annualPay;
	owed = sixMonthPay * PAY_INCREASE - sixMonthPay;
	newAnnualPay = annualPay * PAY_INCREASE; 
	monthlySalary = newAnnualPay/12;
	cout << "You are owed $" << owed << " for the previous six months." << endl;
	cout << "Your new annual salary is $" << newAnnualPay << ".\n";
	cout << "Your new monthly salary is $" << monthlySalary << ".\n";
	return 0;
}
