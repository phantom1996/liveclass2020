// primeorot
#include <iostream>
using namespace std;

int main()
{
	int k;
	// input

	cin >> k;

	int i = 2;

	//multi lie com  met     sigle lie commet
  

	/*
			dfgdgds
			sdfsd
			sdfsdfs
			sdfsdfs


	*/

	while(i<k){

		if(k%i == 0){
			cout<< "the numer is not prime"<<endl;
			break;
		}
		i++;
	}

	if(i== k){
		cout<<"prime"<<endl;
	}

	
	return 0;
}