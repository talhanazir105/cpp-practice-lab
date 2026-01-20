#include <iostream>
using namespace std;
int main()
{
	int n;
	int m;
	cout << "enter numbers of lines :";
	cin >> n;
	cout << "enter numbers of stars :";
	cin >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}