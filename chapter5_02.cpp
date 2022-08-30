#include <iostream>
using namespace std;

int main() {
	int i, j, number;
	char character;
	cout << "Input number line : ";
	cin >> number;
	cout << "Input character : ";
	cin >> character;
	for (i = 1; i <= number; i++) {
		for (j = 1; j <= i; j++) {
			cout << character;
		}
		cout << endl;
	}
	return(0);
}