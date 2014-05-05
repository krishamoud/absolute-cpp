/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 1
 * Questions: Project 3
 * Description: Write a program that will take in three inputs: the amount the consumer needs to recieve, the interest rate,
 * 							and the duration of the loan in months.  The program should then calculate the face value required in order
 * 							for the consumer to recieve the amount needed.  It should also calculate the monthly payment.
 * */

#include<iostream>
using namespace std;

int main(){
	double face_value, new_face_value, interest_rate, total_interest, number_of_months, monthly_payment, time, interest;
	int const year = 12, percent_decimal = 100;
	char ans;
	
	do
	{
	  cout << "Enter the amount of money you need from a loan.\n";
	  cin >> face_value;
	  cout << "Enter the interest rate of the loan in percentage.\n";
	  cin >> interest_rate;
	  cout << "Now enter the duration of the loan in months.\n";
	  cin >> number_of_months;
	  interest = (face_value*interest_rate) / percent_decimal;
	  time = number_of_months / year;
	  total_interest = (face_value*time*interest);
	  new_face_value = (face_value+total_interest); 
  	  monthly_payment = (new_face_value/number_of_months);
  	  cout.setf(ios::fixed);
	  cout.setf(ios::showpoint);
	  cout.precision(2);
	  cout << "The amount of money you need to borrow is " << new_face_value << ".\n";
	  cout << "That means that your monthly payment would be " << monthly_payment << ".\n";
	  cout << "Do you want to do it again?\n";
	  cout << "Press y for yes, press n for no: ";
	  cin >> ans;
	} while (ans == 'y' || ans == 'Y'); 
	cout << "Goodbye!\n";
	return 0;
}
