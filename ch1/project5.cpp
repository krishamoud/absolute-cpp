/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 1
 * Questions: Project 3
 * Description: Write a program that determines if a room is in violation of fire hazards based on company meetings.
**/

#include<iostream>
using namespace std;

int main(){
	int maxPeople, peopleAttending;
	cout << "How many people can the room hold?: ";
	cin >> maxPeople;
	cout << "How many people will be attending?: ";
	cin >> peopleAttending;
	if(maxPeople > peopleAttending){
		cout << "You're good homie\n";
	} else {
		cout << "There are too many people for this room.\n";
		cout << (peopleAttending - maxPeople) << " need to be accomodated.\n";
	}
	return 0;
}
