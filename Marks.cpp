#include <iostream>
using namespace std;

int main() {
    int marks;
    int totalMarks = 0; 
    char choice;
    do {
        cout << "GRADE CALCULATOR FOR 60 Q.P" << endl;
        cout << "Enter Your Marks: ";
        cin >> marks;
        totalMarks += marks;
        if (marks >= 48 && marks <= 60) {
            cout << "Grade A" << endl;
        } 
        else if (marks >= 39 && marks <= 47) {
            cout << "Grade B" << endl;
        } 
        else if (marks >= 30 && marks <= 38) {
            cout << "Grade C" << endl;
        } 
        else if (marks >= 24 && marks <= 29) {
            cout << "Grade D" << endl;
        } 
        else {
            cout << "Grade F" << endl;
        }
        cout << "Total Sum of Marks: " << totalMarks << endl;
        cout << "Do you want to calculate again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y'); 
    return 0;
}
