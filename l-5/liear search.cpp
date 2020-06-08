// liear search
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >>n;

	int a[1000];

	for(int i=0;i<n;i++){
		cin>>a[i];
	} 

	int key;
	cin>>key;

	//bool kyamila=false;

	int i;
	for( i=0;i<n;i++){
		if(a[i]==key){
			cout<<"Key foud";
			//kyamila=true;
			break;
		}	
	}

	if(i==n){
		cout<<"ot foud";
	}
//	if(kyamila==false){
//		cout<<"ot foud";
//	}



	
	return 0;
}