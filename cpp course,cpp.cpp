#include <iostream>
using namespace std;
int main()
{
	char grade = 'B';
	int value = grade;
	cout << grade << endl
		 << value << endl; // B,65
	double price = 400.99999;
	int newprice = (int)price;
	cout << price << endl
		 << newprice << endl; // 400.99999,400
	int age;
	cout << "Enter your age" << endl;
	cin >> age;
	cout << "Your age is :" << age << endl;
	int a = 5, b = 34;
	int sum = a + b;
	cout << "sum=" << sum << endl
		 << (a + b) << endl; // sum=39,39
	int c = 9, d = 12;
	int modulo = c % d;
	cout << "MODULO =" << modulo << endl; // 9
	/*ARETHMETIC OPERATORS*/
	// FOUR MAIN
	//+,-,*,/,% ETC
	// int/int=int
	// int/float=float
	// float/int=float
	// float/float=float
	// int/double=double
	// double/int=double
	// double/float=double
	// float/double=double
	// doubel/double=double
	cout << (5 / 2) << endl; // not round off in c++//2
	int e = 5;
	double f = 2;
	float g = 2;
	cout << (e / f) << endl;		 // 2.5
	cout << (e / (int)g) << endl;	 // 2
	cout << (e / g) << endl;		 // 2.5
	cout << (e / (double)g) << endl; // 2.5
	int answer = (e / (double)g);
	cout << answer << endl; // 2
	/*RELATIONAL OPERATORS*/
	// MAIN,RETURN BOOLEAN VALUE ALWAYS
	//<,>,<=,>=,==,!=
	cout << (3 < 5) << endl;  // true -> 1
	cout << (3 > 5) << endl;  // false -> 0
	cout << (3 == 5) << endl; // false -> 0
	cout << (3 != 5) << endl; // true -> 1
	/*LOGICAL OPERATORS*/
	// OR || PIPE
	// AND && AMPERSAND
	// NOT ! LOGICAL NOT
	/*NOT*/ cout << (3 > 1) << endl;	  // true-> 1
	cout << !(3 > 1) << endl;			  // false -> 0
	/*OR*/								  /*CONDITIONAL STATMENT*/
	cout << ((3 > 1) || (5 < 3)) << endl; // true->1
	cout << ((3 < 1) || (5 < 3)) << endl; // false->0
	/*AND*/								  /*CONDITIONAL STATMENT*/
	cout << ((3 > 1) && (5 > 3)) << endl; // true->1
	cout << ((3 < 1) && (5 < 3)) << endl; // false->0
	cout << ((3 < 1) && (5 > 3)) << endl; // false->0
	/*INCREMENT UNARY OPERATOR*/
	// POST INCREAMENT OPERATOR
	int z = 2;
	int x = z++;
	cout << "x = " << x << endl; // 2
	cout << "z = " << z << endl; // 3
	// PRE INCREAMENT OPERATOR
	int t = 2;
	int s = ++t;
	cout << "s = " << s << endl; // 3
	cout << "t = " << t << endl; // 3
	/*DECREMENT UNARY OPERATOR*/
	// POST DECREAMENT OPERATOR
	int u = 2;
	int q = u--;
	cout << "q = " << q << endl; // 2
	cout << "u = " << u << endl; // 1
	// PRE DECREAMENT OPERATOR
	int y = 2;
	int w = --y;
	cout << "w = " << w << endl; // 1
	cout << "y = " << y << endl; // 1
	return 0;
}