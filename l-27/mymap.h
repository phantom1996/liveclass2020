// mymap
// map
#include <iostream>
#include <string>
using namespace std;

class node{

public:
	string key;
	int value;
	node* next;

	node(string s,int p){
		key = s;
		value = p;
		next = NULL;
	}

	~node(){
		if(next!=NULL){
			delete next;
		}
		cout<<"Deleting " <<key<<" "<<value<<endl;
	}

};

class Hashmap{


	int Hashfunc(string key){

		int idx = 0;

		int p = 1;

		for(int i =0;i<key.length();i++){
			idx = idx + (key[i]*p) % table_size;
			p = (p*27)%table_size;
			idx = idx % table_size;
		}

		return idx%table_size;

	}


	void Rehash(){
		node** oldtable = table;
		int oldtable_size = table_size;
		table_size = 2*table_size;
		table = new node*[table_size];

		for(int i=0;i<table_size;i++){
			table[i] = NULL;
		}

		current_size = 0;
		//copy
		for(int i = 0;i<oldtable_size ;i++){
			node* temp = oldtable[i];

			while(temp!=NULL){
				insert(temp->key,temp->value);
				temp = temp->next;
			}

			if(oldtable[i] !=NULL){
				delete oldtable[i];
			}
		}

		delete []oldtable;

	}



public:

	node** table;
	int current_size;
	int table_size;


	Hashmap(int ts = 7){
		current_size = 0;
		table_size = ts;
		table = new node*[table_size];

		for(int i=0;i<table_size;i++){
			table[i] = NULL;
		}
	}

	void insert(string key,int value){

		int idx = Hashfunc(key);

		node* n = new node(key,value);

		n->next = table[idx];
		table[idx] = n;

		current_size++;

		float lf = current_size/(1.0 * table_size);
		if(lf >= 0.7){
			Rehash();
		}

	}

	void Delete(string key){

	}

	node* search(string mykey){
		int idx = Hashfunc(mykey);

		node* temp = table[idx];
		while(temp!=NULL){
			if(temp->key == mykey ){
				return temp;
			}
			temp = temp->next;
		}

		return NULL;
	}

	int mycurret_size(){
		return current_size;
	}

	bool is_empty(){
		return current_size == 0;
	}


	void print(){

		for(int i=0;i<table_size;i++){
			cout<<"Bucket "<<i<<" -> ";
			node* temp = table[i];

			while(temp!=NULL){
				cout<<"( "<<temp->key<<" , "<<temp->value<<" ) -->";
				temp=temp->next;
			}
			cout<<endl;
		}
	}

};
