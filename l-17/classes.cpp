// classes
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//blueprit


class Car {

int price;


public:


	//costructor
//ormal
	Car(){

		cout<<"hi i am in costructor"<<endl;

	}

//param

	Car(char a[],int p,int s,char m[],string co ){
		// name = a; wrog
		cout<<"hi i am in para costructor"<<endl;
		strcpy(name,a);
		price = p;
		seater = s;

		strcpy(model_no,m);

		colour  = co; 


	}




	char name[100];
	// int price;
	int seater;
	char model_no[50];
	string colour;

	void set_values(){
		cin >> name;
		cin >> price;
		cin >> seater;
		cin >> model_no;
		cin >> colour;
	}
	void print(){
		cout<<endl;
		cout<<name<<endl;
		cout<<price<<endl;
		cout<<seater<<endl;
		cout<<model_no<<endl;
		cout<<colour<<endl;

	}


	void  change_price(){
		price = 50000;
 	}


};


int main()
{

	// Car X[50];

	Car A;  //oject creation
	A.set_values();
	A.print();
	
	// Car C;
	// C.set_values();
	// C.print();
	

	// A.price = 5; error price is private
	//A.change_price();

	//A.print();

	Car D("maruti",500,4,"sxf","grey");
	D.print();

	return 0;
}








