#include <iostream>
#include <string>
using namespace std;

int main() {
	char Choice;
	float Area;
	cout << " Program Calculate Area " << endl;
	cout << " 1. Circle" << endl;
	cout << " 2. Recatangle" << endl;
	cout << " 3. Exit" << endl;
	cout << "Enter your choose number: ";
	cin >> Choice;
	if (Choice == '1') {
		float Radius;
		cout << "\nEnter radius : ";
		cin >> Radius;
		Area = 3.14159F * Radius * Radius;
		cout << "Area of Circle = " << Area << endl;
	}
	else if (Choice == '2') {
		float Lenght, Width;
		cout << "Enter lenght and width : ";
		cin >> Lenght >> Width;
		Area = Lenght * Width;
		cout << "Area of Ractangle = " << Area << endl;
	}
	else if (Choice == '3') cout << "\n. . . Exit Program . . .\n";
	else cout << "\nYou choose out of range is not process.\n";
	return(0);
}