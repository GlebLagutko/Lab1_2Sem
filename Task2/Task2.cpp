#include <iostream>
#include <map>
#include <string>


using namespace std;



void FindDigit(multimap<int, string> mapDigits)
{
	int a;
	cout << "Enter digit : ";
	cin >> a;
	auto iterator = mapDigits.lower_bound(a);
	if (iterator != mapDigits.end())
		for (iterator; iterator != mapDigits.upper_bound(a); ++iterator)
			cout << iterator->second << endl;
	else
		cout << "Not found " << endl;
}

int main()
{
	multimap<int, string> mapDigits ={ 
	{ 1, "адзін" },
	{ 1, "один" },
	{ 1, "one" },
	{ 2, "два" },
	{ 2, "two" },
	{ 3, "тры" },
	{ 3, "три" },
	{ 3, "three" },
	{ 4, "чатыры" },
	{ 4, "четыре" },
	{ 4, "four" }
	};
	FindDigit(mapDigits);
	system("pause");
	return 0;

}