#include <iostream>
using namespace std;

int main() {
	int ListSize = 5;
	int ValuesProcessed = 0;
	float ValueSum = 0;
	cout << "Please enter " << ListSize << " numbers" << endl;
	while (ValuesProcessed < ListSize) {
		float Value;
		cin >> Value;
		ValueSum += Value;
		++ValuesProcessed;
	}
	float Average = ValueSum / ValuesProcessed;
	cout << "Average : " << Average << endl;
	return(0);
}