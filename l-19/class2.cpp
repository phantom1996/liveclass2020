// class2
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

		name = new char[strlen(a)+1];
		strcpy(name,a);
		price = p;
		seater = s;

		strcpy(model_no,m);

		colour  = co; 


	}




	char *name; //dynamic  poiter
	// int price;
	int seater;
	char model_no[50];
	string colour;

	void set_values(){
		
		char a[100];
		cin>>a;

		name = new char[strlen(a)+1];

		strcpy(name,a);

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

 	//copy costructor

 	Car( Car &A){

 		cout<<"I am in copy costructor"<<endl;

 		name = new char[strlen(A.name)+1];
 		strcpy(name,A.name);
 	//	name = A.name;  shallow copy

 		price = A.price;

 		seater = A.seater;

 		strcpy(model_no , A.model_no);

 		colour = A.colour;

 	}


 	~Car(){

 		cout<<"Destroying oject "<<name<<endl;

 	}

 	/*return_type operator +=(){

 	}*/


 	void operator +=(Car D){
			
		int l = strlen(name) + strlen(D.name) +1;

		char * newname = new char[l];

		strcpy(newname,name);

		strcat(newname,D.name);


		delete []name;

		name = newname;

		price = price + D.price;

		seater = seater + D.seater;

			//no color
		//no model

 	}	





};


int main()
{

	// Car X[50];

	Car A;  //oject creation
	A.set_values();
	//A.print();
	
	// Car C;
	// C.set_values();
	// C.print();
	

	// A.price = 5; error price is private
	//A.change_price();

	//A.print();

	Car D("maruti",500,4,"sxf","grey");
	//D.print();


	Car E=A; //copy costructor

	 // car E(A);

	A.name[0] = 'T';

	A.print();

	E.print();

    //copy assig operator

	Car F;


	F = D;

	D.name[0] = 'H';

	F.print();


	A+=D;

	A.print();

	return 0;
}








