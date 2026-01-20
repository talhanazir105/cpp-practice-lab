#include<iostream>
using namespace std;
int main()
{
	int age;//Get integer age
	cout<<"ENTER YOUR AGE :";
	cin>>age;//get input from the user
	if(age<=50)  { //if age smaller then equal to 50 than
		int years_left=50-age; //get integer years_left and Subtracting age from 50
		cout<<years_left<<" Years left until they turn 50 :";//User has to be given output that Years left until they turn 50
	}
	else {
		cout<<"You are greater than 50";
	}
	return 0;
}