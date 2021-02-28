#include <iostream>
using namespace std;
string s[]={"zreo","one","two","three","four","five","six","seven","eight","nine"};
void inttostring(int n){
	
	if(n==0){
		return;
	}
	int r=n%10;
	inttostring(n/10);
	cout<<s[r]<<" ";
} 
int main(){
	int n=0;
	cin>>n;
	if(n==0){
		cout<<"zreo";
		return 0;
	}
	inttostring(n);
	return 0;
}