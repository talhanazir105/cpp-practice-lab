#include <iostream>
using namespace std;

int main() {
    int N, fact = 1;
    cout << "Enter a number: ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        fact *= i;
    }
    cout << "Factorial = " << fact << endl;
    return 0;
}