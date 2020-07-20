// heap
#include <iostream>
#include <vector>
using namespace std;


class Minheap{


void heapify(int index){
	int parent = index;
	int left_child_index = 2*parent;
	int right_child_index = 2*parent + 1;

	if(left_child_index < v.size()  && v[parent] > v[left_child_index]){
		parent = left_child_index;
	}
	if(right_child_index < v.size() && v[parent] > v[right_child_index]){
		parent = right_child_index;
	}

	if(index != parent){
		swap(v[index],v[parent]);
		heapify(parent);
	}		


}

public:
	vector<int> v;

	Minheap(){
		v.push_back(-1);
	}

	void push(int x){
		v.push_back(x);

		//heap property ko restore krana h
		int li = v.size() -1;
		int pi = li/2;

		while(li > 1 && v[li] < v[pi]){
			swap(v[li],v[pi]);

			li = pi;

			pi = li/2; 
		}

	}

	void pop(){

		swap(v[1],v[v.size()-1]);

		v.pop_back();

		heapify(1);

	}

	int size(){
		return v.size() - 1;
	}

	int top_element(){

		return v[1];

	}

	bool empty(){

		return v.size() == 1;
	}

};



void print(Minheap h){
	while(!h.empty()){
		cout<<h.top_element()<<" ";
		h.pop();
	}
}


int main()
{

	Minheap h;

	h.push(1);
	h.push(2);
	h.push(3);
	h.push(17);
	h.push(19);
	h.push(36);
	h.push(7);
	h.push(25);
	h.push(100);

	 cout<<h.top_element()<<endl;
	// cout<<h.size()<<endl
	 h.pop();

	 cout<<h.top_element()<<endl;
	//print(h);





	return 0;
}
