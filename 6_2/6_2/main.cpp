#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
	int IntValue;
	long LongValue;
	float FloatValue;
	string StrValue;
	cout << "Enter string number : ";
	cin >> StrValue;
	IntValue = atoi(StrValue.c_str());
	LongValue = atoi(StrValue.c_str());
	FloatValue = atoi(StrValue.c_str());
	cout << endl;
	cout << "Convert String to Numberic.\n";
	cout << "***************************\n";
	cout << "Convert to integer = " << IntValue << endl;
	cout << "Convert to long = " << LongValue << endl;
	cout << "Convert to float = " << FloatValue << endl;
	
	srand(time(0));
	cout << "Now random integer number 10 number:" << endl;
	cout << "************************************" << endl;
	for ( int N = 1, Num ; N <= 10 ; N++) {
		//Num = rand() % 10;
		Num = 1 + rand() % 6;
		cout << Num << "  ";
	}
	cout << endl;
	return(0);
}
