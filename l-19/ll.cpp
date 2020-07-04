// ll
#include <iostream>
using namespace std;


class node{

public:
	int data;
	node* next;


	node(int x){
		data = x;
		next = NULL;

	}
};



class LinkList{

public:
	node* head;
	node* tail;

	LinkList(){
		head=NULL;
		tail=NULL;
	}

	void Insertion_at_head(int x){
		// node create

		node* n = new node(x);

		if(head == NULL){
			head = n;
			tail = n;
		}
		else{
			n->next = head;
			head = n;
		}

	}

	void Insertion_at_tail(int x){
		node* n = new node(x);

		if(head==NULL){
			head = n;
			tail = n;
		}
		else{
			tail->next = n;
			tail = n;
		}
	}


	void Insertion_at_x(int x,int pos){

		if(pos<=0){
			Insertion_at_head(x);
		}
		else if(pos>length()){
			Insertion_at_tail(x);
		}
		else{
			node* temp = head;

			int moveno = 1;

			while(moveno < pos-1){
				moveno++;
				temp= temp->next;
			}

			node* n = new node(x);

			n->next = temp->next;
			temp->next = n;

		}

	}


	void Delete_at_head(){
		node* temp = head;

		head=head->next;

		delete temp;
	}

	void Delete_at_tail(){
		node* temp = head;

		while(temp->next!=tail){
			temp=temp->next;
		}
		delete tail;
		temp->next = NULL;

		tail = temp;
	}


	void print(){
		node* temp = head;

		while(temp!=NULL){
			cout<<temp->data<<"-->";
			temp=temp->next;
		}
	}


	int length(){
		node* temp = head;
		int l=0;
		while(temp!=NULL){
			l++;
			temp=temp->next;
		}
		return l;
	}



};

int main()
{
	LinkList l;

	for(int i=1;i<6;i++){
		//l.Insertion_at_head(i);
		l.Insertion_at_tail(i);
	}

	// l.print();
	// cout<<endl;
	// cout<<l.length();

	//l.Insertion_at_x(6,4);
	l.Delete_at_head();
	l.Delete_at_tail();
	l.print();
	return 0;
}