#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number:";
	cin >> num;
	// char choice;
	// do{
	if (num % 2 == 0)
	{
		cout << num << " is even\n";
	}
	else
	{
		cout << num << " is odd\n";
	}
	//	cout << "can you check again?(y/n)";
	//	cin >> choice;
	// }
	// while(choice=='Y'|| choice=='y');
	return 0;
}