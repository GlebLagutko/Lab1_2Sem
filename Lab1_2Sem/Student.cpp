#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

void Student:: SetData() {
	cout << "Input ID : ";
	cin >> ID;
	cout << "Input surname : ";
	cin >> surname;
	cout << "Input name  : ";
	cin >> name;
}

void Student::ShowData(){
	cout << " ID : " << ID << endl << " Name : " << surname << " " << name << endl;
}

unsigned int Student::GetID() {
	return this->ID;
}