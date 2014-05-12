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

struct ShoeType
{
	char style;
	double price;
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
	return 0;
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
