#include <iostream>
using namespace std;

void subsequence(char in[],int i, char ou[],int j){

	//base case
	if(in[i]=='\0'){
		ou[j]='\0';
		cout<<ou<<endl;
		return;
	}
	//recursive case
	//exclude 
	subsequence(in ,i+1, ou, j);
	//include 
	ou[j]=in[i];
	subsequence(in, i+1, ou, j+1);
}
int main(){
	char input[100],output[100];
	cin>>input;
	subsequence(input,0,output,0);
	return 0;
}