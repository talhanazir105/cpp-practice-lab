#include <iostream>
using namespace std;

int main() {
    int gate, input1, input2;
    char continueCalc;

    do {
        cout << "Select the gate: " << endl;
        cout << "1. AND Gate" << endl;
        cout << "2. OR Gate" << endl;
        cout << "3. NOT Gate" << endl;
        cout << "4. NAND Gate" << endl;
        cout << "5. NOR Gate" << endl;
        cout << "6. XOR Gate" << endl;
        cout << "7. XNOR Gate" << endl;
        cout << "Enter your choice (1-7): ";
        cin >> gate;

        // Check if it's NOT gate
        if (gate == 3) {
            cout << "Enter input (0 or 1): ";
            cin >> input1;
            cout << "Output (NOT gate): " << (input1 == 0 ? 1 : 0) << endl;
        } else {
            cout << "Enter input 1 (0 or 1): ";
            cin >> input1;
            cout << "Enter input 2 (0 or 1): ";
            cin >> input2;

            switch (gate) {
                case 1:
                    cout << "Output (AND gate): " << (input1 & input2) << endl;
                    break;
                case 2:
                    cout << "Output (OR gate): " << (input1 | input2) << endl;
                    break;
                case 4:
                    cout << "Output (NAND gate): " << !(input1 & input2) << endl;
                    break;
                case 5:
                    cout << "Output (NOR gate): " << !(input1 | input2) << endl;
                    break;
                case 6:
                    cout << "Output (XOR gate): " << (input1 ^ input2) << endl;
                    break;
                case 7:
                    cout << "Output (XNOR gate): " << !(input1 ^ input2) << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
                    break;
            }
        }

        cout << "Do you want to calculate again? (y/n): ";
        cin >> continueCalc;

    } while (continueCalc == 'y' || continueCalc == 'Y');

    cout << "Exiting program. Goodbye!" << endl;
    return 0;
}

