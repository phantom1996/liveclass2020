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



	int mid(){

		// node* fptr = head; //print 4
		node* fptr = head->next; //for print 3
		node* sptr = head;

		while(fptr!=NULL && fptr->next!=NULL){
			fptr = fptr->next->next;
			sptr = sptr->next;
		}

		return sptr->data;

	}
	// node* MergeSort(){

	// }

};


node* MergeLL(node* head1 , node* head2 ){

	if(head1== NULL){
		return head2;
	}

	if(head2 == NULL){
		return head1;
	}

	node* c = NULL;

	if(head1->data < head2->data){
		c = head1;
		c->next = MergeLL(head1->next,head2);

	}

	else{
		c = head2;
		c->next = MergeLL(head1,head2->next);
	}


	return c;


}
node* mid1(node* head){

	// node* fptr = head; //print 4
	node* fptr = head->next; //for print 3
	node* sptr = head;

	while(fptr!=NULL && fptr->next!=NULL){
		fptr = fptr->next->next;
		sptr = sptr->next;
	}

	return sptr;

}

node* MergeSort(node* head){

	if(head==NULL || head->next == NULL){
		return head;
	}

	node* mid = mid1(head);

	node* a = head;

	node* b = mid->next;

	mid->next = NULL; //imp


	a = MergeSort(a);

	b = MergeSort(b);

	node* newnode = MergeLL(a,b);

	return newnode;

}

void F_cycle_detection(node* &head){

	node* fptr = head;
	node* sptr = head;

	while(fptr != NULL  || fptr->next != NULL){ // if cycle the go out
		fptr = fptr->next->next;
		sptr = sptr->next;
		if(fptr==sptr){
			break;
		}
	}

	sptr = head;

	while(fptr->next != sptr->next){
		fptr=fptr->next;
		sptr=sptr->next;
	}

	fptr->next = NULL;
}

