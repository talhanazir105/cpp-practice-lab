#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char op;
    cout << "Enter First Number:";
    cin >> a;
    cout << "Enter Operater (+,-,/,*)";
    cin >> op;
    cout << "Enter Second Number:\n";
    cin >> b;
    switch (op)
    {
    case '+':
        cout << "Result:" << (a + b) << endl;
        break;
    case '-':
        cout << "Result:" << (a - b) << endl;
        break;
    case '/':
        cout << "Result:" << (a / b) << endl;
        break;
    case '*':
        cout << "Result:" << (a * b) << endl;
        break;
        if (b != 0)
        {
            cout << "Result:" << (a / b) << endl;
        }
        else
        {
            cout << "Error! Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Invalid operator! Please use +, -, *, or /" << endl;
    }
    return 0;
}