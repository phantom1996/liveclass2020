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


int ind = 5;



int Search(int in[],int s,int e,int data){
	for(int i=s;i<=e;i++){
		if(in[i]==data){
			return i;
		}
	}
}

node* pre_in(int post[],int in[],int s,int e){
	//static int ind = 0 ;

	if(s>e){
		return NULL;
	}

	node* root = new node(post[ind]);
	ind--;

	if(s==e){
		return root;
	}

	//int ele = pre[ind];

	//ind++;

	int ind1 = Search(in,s,e,root->data);

	// root->left = pre_in(pre,in,s,ind1-1); pre first
	root->right = pre_in(post,in,ind1+1,e);
	root->left = pre_in(post,in,s,ind1-1);
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


int main()
{
	int pre[] = {8 ,4, 1, 5, 3, 7};

	int in[] = {1,4, 5 ,8, 3, 7};

	int post[]  = {1,5,4,7,3,8};


	node* root = pre_in(post,in,0,5);

	Level_order_output(root);
	//pr_order(root);
	in_order(root);
	//post_order(root);
	//cout<<endl;
	//cout<<cnt_Nodes(root);
	//cout<<heigth(root);
	//cout<<Daimeter(root);
	return 0;
}

