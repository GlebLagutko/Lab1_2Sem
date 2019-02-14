#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "Student.h"

using namespace std; 

const int Count = 3;

void FindStudent(map <unsigned int, Student> MapStudents)
{
	int ID;
	cout << "Enter ID : ";
	cin >> ID;
	auto iterator  = MapStudents.find(ID);
	if (iterator != MapStudents.end())
		iterator->second.ShowData();
	else
		cout << "Not found ";
}

void FillVector(vector<Student>& VectorStudents)
{
	Student s1(1, "Petrov", "Pavel");
	VectorStudents.push_back(s1);
	Student s2(2, "Ivanov", "Ivan");
	VectorStudents.push_back(s2);
	Student s3(3, "Stalin", "Iosif");
	VectorStudents.push_back(s3);
}

map <unsigned int, Student> FillMap(vector<Student> VectorStudents)
{
	map <unsigned int, Student> MapStudents;
	for (int i = 0; i < Count; ++i)
	{
		MapStudents.insert(pair<unsigned int, Student>(VectorStudents[i].GetID(), VectorStudents[i]));
	}
	return MapStudents;
}

int main()
{
	vector<Student> VectorStudents;
	FillVector(VectorStudents);
	map <unsigned int, Student> MapStudents = FillMap(VectorStudents);	
	FindStudent(MapStudents);
	system("pause");
	return 0;
}