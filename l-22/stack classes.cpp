// stack classes
#include <iostream>
using namespace std;


template<typename T>


class node{
public:

	T data;

	node<T>* next;	

	node(T x){
		data = x;
		next = NULL;
	}
};
template<typename T>

class Stack{

public:

	node<T>* head;

	int cnt;

	Stack(){
		head=NULL;
		cnt=0;
	}

	void push(T x){

		cnt++;

		node<T>* n = new node<T>(x);

		if(head==NULL){
			head=n;
		}
		else{
			n->next=head;
			head=n;
		}

	}


	void pop(){
		if(cnt>0){
			cnt--;
			node<T>* temp = head;
			head = head->next;
			delete temp;
		}

	}


	int size(){
		return cnt;
	}

	bool empty(){
		return head==NULL;
		// return cnt==0;
	}


	T top(){
		return head->data;
	}

};


int main()
{

	Stack<int> s;

	for(int i=1;i<=5;i++){
		s.push(i);
	}

	s.pop();
	cout<<s.size()<<endl;
	
	cout<<s.empty()<<endl;


	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}

	cout<<s.empty();

	cout<<endl;


	Stack<char> s1;

	s1.push('A');
	s1.push('C');
	s1.push('D');


	cout<<s1.top();














	return 0;
}