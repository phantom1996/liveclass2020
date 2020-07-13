// tree
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


node* CreatTree(){

	int data;
	cin >>data;

	if(data==-1){
		//ase case
		return NULL;
	}
	else{

		node* root = new node(data);
		//cout<<"Enter left child of "<<data<<endl;
		root->left = CreatTree();
		//cout<<"Enter right child of "<<data<<endl;
		root->right = CreatTree();

		return root;

	}

}


void pr_order(node* root){

	if(root== NULL){
		return;
	}

	cout<<root->data<<" ";
	pr_order(root->left);
	pr_order(root->right);

}

void in_order(node* root){
	if(root== NULL){
		return;
	}

	in_order(root->left);
	cout<<root->data<<" ";
	in_order(root->right);
}


void post_order(node* root){
	if(root== NULL){
		return;
	}

	post_order(root->left);
	post_order(root->right);
	cout<<root->data<<" ";
}

int cnt_Nodes(node* root){

	if(root == NULL){
		return 0;
	}

	int x = cnt_Nodes(root->left);

	int y = cnt_Nodes(root->right);

	return x + y + 1;

}

int leaf(node* root){
	//complete it
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

int Daimeter(node* root){

	if(root == NULL){
		return 0;
	}


	int op1 = heigth(root->left) + heigth(root->right) + 1; //passig throudh root ode

	int op2 = Daimeter(root->left);

	int op3 = Daimeter(root->right);


	return max(op1,max(op2,op3));

}



int main()
{
	node* root = CreatTree();
	//pr_order(root);
	//in_order(root);
	//post_order(root);
	//cout<<endl;
	//cout<<cnt_Nodes(root);
	//cout<<heigth(root);
	cout<<Daimeter(root);
	return 0;
}

