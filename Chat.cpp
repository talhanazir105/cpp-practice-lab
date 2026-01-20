#include<iostream>
using namespace std;
int main()
{
	string user1,user2,message;
	cout<<"ENTER USER 1:";
	getline(cin,user1);
	cout<<"ENTER USER 2:";
	getline(cin,user2);
	cout << "\n--- Chat Started ---\n";
	cout << "Type 'exit' to end the chat.\n\n";
	while(true){
		cout<<user1<<":";
		getline(cin,message);
		if (message=="exit"){
			cout<<"CHAT ENDED.\n";
			break;
		}
		cout<<user2<<":";
		getline(cin,message);
		if (message=="exit"){
			cout<<"CHAT ENDED.\n";
			break;
		}
	}
	return 0;
}