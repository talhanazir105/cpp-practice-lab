#include<iostream>
using namespace std;
int main()
{
//	int n=10;
//	int i=1;
//	int sumodd=0;
//	while(i<=n) {
//		if(i%2!=0){
//			sumodd+=i;
//		}
//		i++;
//	}
//	cout<<"sum of odd numbers ="<<sumodd<<endl;
//int n=10;
//int sumeven=0;
//for(int i=1;i<=n;i++) {
//	if(i%2==0) {
//		sumeven+=i;
//	}
//}
//cout<<"sum of even number ="<<sumeven<<endl;
int i=1;
int n=10;
int sumeven=0;
while(i<=n) {
	if(i%2==0) {
		sumeven+=i;
	}
	i++;
}
cout<<"sum of even numbers ="<<sumeven<<endl;
	return 0;
}