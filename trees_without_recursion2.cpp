#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
node* buildtreelevelwise(){
	node*root=NULL;
	int data;
	cout<<"enter the data of root"<<endl;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	root=new node(data);
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* x=q.front();
		q.pop();
		cout<<"enter the data of children of "<<x->data<<" (enter -1 if you don't want any further data)"<<endl;
		int leftchild,rightchild;
		cin>>leftchild>>rightchild;
		if(leftchild!=-1){
			x->left=new node(leftchild);
			q.push(x->left);
		}
		if(rightchild!=-1){
			x->right=new node(rightchild);
			q.push(x->right);
		}
	}
	return root;
}
void postorder(node*root){
	//base case
	if(root==NULL){
		return;
	}

	//recursive case
	
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
void preorderitera(node*root){
	if(root==NULL){
		cout<<"no data present"<<endl;
		return;
	}
	stack <node*> s1;
	stack <node*> s2;
	s1.push(root);
	while(!s1.empty()){
		s2.push(s1.top());
		s1.pop();
		node* x=s2.top();
		if(x->left!=NULL){
			s1.push(x->left);
		}
		if(x->right!=NULL){
			s1.push(x->right);
		}
	}
	while(!s2.empty()){
		cout<<s2.top()->data<<" ";
		s2.pop();
	}
}
int main(){
	node*root=buildtreelevelwise();
	cout<<"postorder by recursion="<<endl;
	postorder(root);
	cout<<endl;
	cout<<"postorder by iteration="<<endl;
	preorderitera(root);
	cout<<endl;
}