#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	 int sale, num, sum;
	 float com;
	 bool a = true;
	 num = 1;
	 sum = 0;
	 cout << "Program Calculate Commission" << endl;
	 cout << setfill('+') << setw(28) << "+" << endl;
	 do {
		 cout << "Enter sales amount " << num << " : ";
		 cin >> sale;
		 if (sale > -1) {
			 sum += sale;
			 num++;
		 }
		 else a = false;
	 }
	 while (a = true);
	 if (num > -1) {
		 int total = num + num;
		 cout << "Total sales = " << total << endl;
	 }
	 else cout << endl;
	 return(0);
}