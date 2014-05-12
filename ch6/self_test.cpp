/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 6 
 * Questions: Self Test
*/

#include<iostream>
using namespace std;

struct ShoeType{
	char style;
	double price;
};

class Temperature{
	public:
 		void set(double newDegrees, char newScale);
		//Sets the member variables to the values given as 
		//arguments.
		void get();
		double degrees;
		char scale; //’F’ for Fahrenheit or ’C’ for Celsius. 
};
class DayOfYear{
		public:
			void input( );
			void output( );
			int month;
			int day;
};
void readShoeRecord(ShoeType& newShoe);
void writeShoeRecord(ShoeType& newShoe);
ShoeType discount(ShoeType& oldRecord);

int main(){
	/* -- Question 1 Begin -- */
	//a)double
	//b)double
	//c)int
	//d)char
	//e)struct
	/* -- Question 1 End -- */

	/* -- Question 2 Begin -- */
	//A $9.99 
	//A $9.99
	/* -- Question 2 End -- */

	/* -- Question 3 Begin -- */
	//There is no semicolon after the structure definition
	/* -- Question 3 End -- */

	/* -- Question 4 Begin -- */
	struct A
	{
 		int b;
 		int c;
	};
	A x = {1, 2};
	cout << x.b << " " << x.c << endl;
	/* -- Question 4 End -- */

	/* -- Question 5 Begin -- */
	//A) month and day are initialized but not year
	//B) month, day, and year are all initialized
	//C) Error.  Too many initializers
	/* -- Question 5 End -- */

	/* -- Question 6 Begin -- */
	struct EmployeeRecord{
		double wage;
		int vacation;
		char status;
	};
	/* -- Question 6 End -- */

	/* -- Question 7 Begin -- */
	ShoeType shoe;
	readShoeRecord(shoe);
	writeShoeRecord(shoe);
	/* -- Question 7 End -- */

	/* -- Question 8 Begin -- */
	discount(shoe);
	writeShoeRecord(shoe);
	/* -- Question 8 End -- */

	/* -- Question 9 Begin -- */
	
	DayOfYear today, birthday;
	today.input();
	today.output();
	/* -- Question 9 End -- */

	/* -- Question 10 Begin -- */
	Temperature cali;
	cali.set(65, 'F');
	cali.get();
	/* -- Question 10 End -- */

	/* -- Question 11 Begin -- */
	//::is for member functions
	//. is for accessing members
	/* -- Question 11 End -- */

	/* -- Question 12 Begin -- */
	//a)invalid
	//b)valid
	//c)valid
	//d)valid
	//e)valid
	/* -- Question 12 End -- */

	/* -- Question 13 Begin -- */
	//it would make them all valid
	/* -- Question 13 End -- */

	/* -- Question 14 Begin -- */
	//a) public: makes the members available for mutation
	//b) private: requires setters and getters to manage 
	/* -- Question 14 End -- */

	/* -- Question 15 Begin -- */
	//a) an adequate amount...
	//b) an adequate number...
	/* -- Question 15 End -- */

	/* -- Question 16 Begin -- */
	//member variables should be private
	//member function should be public
	/* -- Question 16 End -- */

	/* -- Question 17 Begin -- */
	//a)the interface is the comments that tell what information is being used
	//	and the public memeber functions
	//b)the implementation is everything that makes the class work
	/* -- Question 17 End -- */

	return 0;
}
void Temperature::set(double newDegrees, char newScale){
	degrees = newDegrees;
	scale = newScale;
}
void Temperature::get(){
	cout << "It is " << degrees << " degrees " << scale << ".\n";
}
void DayOfYear::input(){
	cout << "Enter the month as an integer: ";
	cin >> month;
	cout << "Enter the day as an integer: ";
	cin >> day;
}

void DayOfYear::output(){
	cout << "The date is " << month << "/" << day << "/14\n";
}

ShoeType discount(ShoeType& oldRecord){
	oldRecord.price = oldRecord.price * 0.9;
	return oldRecord;
}

void readShoeRecord(ShoeType& newShoe){
	cout << "What's type of shoe is it?: ";
	cin >> newShoe.style;
	cout << "What's the price of the shoe?: ";
	cin >> newShoe.price;	
}

void writeShoeRecord(ShoeType& newShoe){
	cout << "This is a " << newShoe.style << " style shoe and it costs $" << newShoe.price << ".\n";
}
