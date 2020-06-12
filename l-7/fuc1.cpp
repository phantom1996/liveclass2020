// fuc1
#include <iostream>
using namespace std;

/*int fuc1(){



	return ; 
}*/


/* int sum(int x ,int y){

 	int c= x+y;

 	return c;
 }*/


int sum(int ,int); //fuctio declarato //prototype


int main()
{
	int x,y;
	cin >>x>>y;

	int a = sum(x,y); //ivoke call

	//cout<<"hello";

	cout<<a;


	
	return 0;
}

int sum(int x ,int y){

 	int c= x+y;     //fuctio ody

 	return c;
 }


