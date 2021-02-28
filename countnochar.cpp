//countnochar
#include <iostream>
using namespace std;
int main(){
	int count=0;
	do{
		
		char ch;
		cin>>ch;
		if (ch=='$'){
			break;
		}
		count++;
	}while(1>0);
	cout<<count;

	return 0;
}