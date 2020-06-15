// poityer ad fuctio
#include <iostream>
using namespace std;

void sf(int * m , int *n){
	int temp = *m;

	*m = *n;

	*n = temp;
	return;
}



int main()
{


	int x = 5;
	int y = 6;


	cout<< x<< " "<<y<<endl;


	sf(&x , &y);



	cout<< x<<" "<<y;
	
	return 0;
}