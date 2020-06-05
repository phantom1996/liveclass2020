// faherhite to celcius
#include <iostream>
using namespace std;

int main()
{
 
	int initial_value;
	int final_value;
	int step_value;


	cout<<"Enter initial value"<<endl;
	cin >> initial_value;

	cout<<"Enter final value "<<endl;

	cin>>final_value;

	cout<<"Enter step value"<<endl;
	cin>>step_value;
	
	while(initial_value <= final_value){
		int celcius = (5.0/9)*(initial_value-32);

		cout<<initial_value<<" ";
		cout<<celcius<<endl;

		initial_value = initial_value +step_value; //icremet
		//initial_value += step_value; compoud Assig operator
	}




	return 0;
}