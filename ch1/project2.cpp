/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 1
 * Questions: Project 2
 * Description: A government research lab has concluded that an artificial sweetener commonly used in
 * 							diet soda will cause death in laboratory mice.  A friend of yours is desperate to lose
 * 							weight but cannot give up soda.  Your friend wants to know how much diet soda it is possible
 * 							to drink without dying as a result.  Write a program to supply the answer.  The input to the
 * 							program is the amount of artificial sweetener needed to kill a mouse, the weight of the mouse,
 * 							and the weight of the dieter.  To ensure the safety of your friend, be sure the program requests
 * 							the weight at which the dieter will stop dieting, rather than the dieter's current weight.  Assume
 * 							that diet soda contains one-tenth of 1% artificial sweetener.  Use a variable declaration with the 
 * 							modifier 'const' to give a name to this fraction.  You may want to express the percentage as 
 * 							the double value 0.001.
*/

#include<iostream>
using namespace std;

int main(){
	float mouseDeath, mouseWeight, dietGoal, bodyWeightPercentage, sodaPercent;
	int totalSoda;
	const float SODA_PERCENT = 0.001;
	const float SODA_WEIGHT = 12.0;
	cout << "How many ounces did the mouse ingest before dying?: ";
	cin >> mouseDeath;
	cout << "How much did the mouse weigh (in ounces)?: ";
	cin >> mouseWeight;
	cout << "What is your ideal weight (in pounds)?: ";
	cin >> dietGoal;
	
	bodyWeightPercentage = mouseDeath / mouseWeight;
	totalSoda = (dietGoal * bodyWeightPercentage);
	sodaPercent = SODA_PERCENT * SODA_WEIGHT;
	cout << "You can drink " << (totalSoda/sodaPercent) << " 12oz cans of soda without dying." << endl;

	return 0;
}
