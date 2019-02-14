#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
private :
	unsigned int ID;
	string name;
	string surname;
public :
	Student(int a, string str1, string str2) : ID(a), surname(str1), name(str2) {};
	unsigned int GetID();
	void SetData();
	void ShowData();
	~Student() {};
};