#include <iostream>
using namespace std;
int main()
{
	char ch=65;
	cout<<ch;
	//1st way
	cin>>ch;
	
	int a=ch;
	if (a>=65 && a<=90){
		cout<<"upper case";
	}
	else if(a>=97 && a<=122 ){
		cout<<"lower case";
	}
	else{
		cout<<"invlid";
	}
	if (a>='A' && a<='Z'){
		cout<<"upper case";
	}
	else if(a>='a' && a<='z' ){
		cout<<"lower case";
	}
	else{
		cout<<"invlid";
	}
		

	/* code */
	return 0;
	
	
	
}