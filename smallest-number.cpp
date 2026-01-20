#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Three Numbers:"<<endl;
	cin>>a>>b>>c;
	if(a<b)
	  if(a<c)
	  cout<<a<<" is smallest number"<<endl;
	  else
	  cout<<c<<" is smallest number"<<endl;
	  if(b<c)
	  cout<<b<<" is smallest number"<<endl;
	  else
	  cout<<c<<" is smallest number"<<endl;
	  return 0;
}
