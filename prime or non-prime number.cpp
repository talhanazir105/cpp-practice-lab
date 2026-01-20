#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a Number:";
	cin>>n;
	bool isprime=true;
	for(int i=2;i*i<=n;i++) {
		if ( n%i==0 ) {
			isprime=false;
			break;
		}
	}
	if (isprime==true) {
		cout<<"Prime number\n";
	} else {
		cout<<"Non-prime number\n";
	}
	return 0;
}