/**
 * Author: Kris Hamoud
 * Purpose: Learning
 * Book: Absolute C++
 * Github: https://github.com/krishamoud
 * Git Repo: https://github.com/krishamoud/absolute-cpp.git 
 * Chapter: 6 
 * Questions: use structs to calculate a students grade 
*/

#include<iostream>
using namespace std;

struct Student{
	double quiz1, quiz2, midterm, finalExam;
	double quizAverage, midtermPercent, finalExamPercent, gradePercent;
};

int main(){
	Student one;
	cout << "Enter the first quiz score: ";
	cin >> one.quiz1;
	cout << "enter the second quiz score: ";
	cin >> one.quiz2;
	cout << "Enter the midterm score: ";
	cin >> one.midterm;
	cout << "Enter the final exam score: ";
	cin >> one.finalExam;
	cout << one.finalExam << endl;
	one.quizAverage = ((one.quiz1 + one.quiz2) / 20) * 0.25;
	one.midtermPercent = one.midterm / 100 * 0.25;
	one.finalExamPercent = one.finalExam / 100 * 0.5;
	cout << one.quizAverage << endl;
	cout << one.midtermPercent << endl;
	cout << one.finalExamPercent << endl;
	one.gradePercent = one.finalExamPercent + one.midtermPercent + one.quizAverage;
	cout << one.gradePercent << endl;
	return 0;
}
