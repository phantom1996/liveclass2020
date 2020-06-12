// switch
#include <iostream>
using namespace std;

int main()
{
	char c;
	cin>>c;

	switch(c){

		case 'O':
			cout<<"Outstadig"<<endl;
			break;
		case 'A':
			cout<<"Good"<<endl;
			break;
		case 'C':
			cout<<"Average"<<endl;
			break;
		default:
			cout<<"Fail";
	}
	
	return 0;
}