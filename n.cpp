#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=18)
    cout<<"You are eligible for Driving license";
    else
    cout<<"Your Age smaller than 18 you are not eligible for driving license";
    return 0;
}