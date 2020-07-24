// hashmap
#include <iostream>

#include "mymap.h"

using namespace std;

int main()
{
	Hashmap menu;

	menu.insert("Pepsi",50);
	menu.insert("Burger",30);
	menu.insert("Pizza",120);
	menu.insert("Noodles",75);
	menu.insert("Coke",50);
	menu.insert("Momos",30);
	menu.insert("FrenchFries",50);

	menu.print();

	// string s;
	// cin>>s;

	// node* a = menu.search(s);
	// if(a!=NULL){
	// 	cout<<a->value;
	// }
	// else{
	// 	cout<<"Item not exist";
	// }

	for(int i=0;i<menu.table_size;i++){
		if(menu.table[i]!=NULL){
			delete menu.table[i];
		}
	}

	delete []menu.table;



	return 0;
}