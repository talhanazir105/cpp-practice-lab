#include<iostream>
using namespace std;
int main()
{float  vi,t,a,vf;
cout<<"initial  velocity";
cin>>vi;
cout<<"time";
cin>>t;
cout<<"accelration";
cin>>a;
vf=vi*t+1/2*a*t*t;
cout<<"final velocity"<<vf;
return 0;
}

