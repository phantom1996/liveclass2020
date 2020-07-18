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

#include <climits>

bool is_st(node* root,int mini = INT_MIN, int maxi = INT_MAX){

	if(root == NULL){
		return true;
	}


	if( (root->data>=mini && root->data<=maxi) && is_st(root->left,mini,root->data) && is_st(root->right,root->data,maxi)){
		return true;
	}
	else{
		return false;
	}
}
int heigth(node* root){
	if(root==NULL){
		return 0;
	}

// tc o(n)

	int left_ki_hei = heigth(root->left);

	int right_ki_hei = heigth(root->right);


	return max(left_ki_hei,right_ki_hei) + 1;
}

#include <cmath>

bool is_balaced(node* root){
	if(root==NULL){
		return true;
	}

	if(abs(heigth(root->left) - heigth(root->right)) <=1 && is_balaced(root->left) && is_balaced(root->right)){
		return true;
	}
	else{
		return false;
	}

}


node* Arraytost(int a[],int s,int e){
	if(s>e){
		return NULL; 
	}

	int mid = (s+e)/2;

	node* root = new node(a[mid]);

	root->left = Arraytost(a,s,mid-1);
	root->right = Arraytost(a,mid+1,e);

	return root;
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};

	int n = sizeof(a)/sizeof(int);

	node* root = Arraytost(a,0,n-1);
	//node* root = Createbst();
	Level_order_output(root);
	//in_order(root);
		// int key;
		// cin>>key;
	cout<<boolalpha<<is_st(root);
		
	return 0;
}