#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    char grade;
    cout << "Enter your score : ";
    cin >> score;
    switch (score) {
    case 100:
        grade = 'A';
        break;
    }
    switch (score / 10) {
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        grade = 'F';
        break;
    default:
        cout << "Your score is out of range.";
        return(1);
    }
    cout << "Grade = " << grade;
    return(0);
}