// st
#include <iostream>
using namespace std;

class node{

public:
	int data;

	node* left;

	node* right;

	node(int x){
		data = x;
		left = NULL;
		right = NULL;
	}
};

node* Insert_into_bst(node* root,int data){

	if(root==NULL){
		root = new node(data);
		return root;
	}

	else if(data < root->data){
		root->left = Insert_into_bst(root->left,data);
	}
	else{
		root->right = Insert_into_bst(root->right,data);
	}

	return root;

}


node* Createbst(){


	int data;

	cin>>data;

	node* root = NULL;

	while(data!=-1){

		root = Insert_into_bst(root,data);
		cin>>data;
	}

	return root;



}

#include <queue>
void Level_order_output(node* root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);


	while(!q.empty()){

		node* temp = q.front();
		q.pop();

		cout<<temp->data<<" ";

		if(temp->left){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}

		if(q.front()==NULL){
			cout<<endl;

			q.pop();

			if(!q.empty()){
				q.push(NULL);
			}

		}

	}
}
void in_order(node* root){
	if(root== NULL){
		return;
	}

	in_order(root->left);
	cout<<root->data<<" ";
	in_order(root->right);
}


bool Search(node* root,int key){

	if(root==NULL){
		return false;
	}

	if(root->data == key){
		return true;
	}
	else if(root->data > key){
		Search(root->left,key);
	}
	else{
		Search(root->right,key);
	}
}


int main()
{
	node* root = Createbst();
	//Level_order_output(root);
	//in_order(root);
		int key;
		cin>>key;
	cout<<boolalpha<<Search(root,key);
		
	return 0;
}