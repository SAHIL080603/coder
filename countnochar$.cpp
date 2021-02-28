//countnochar
#include <iostream>
using namespace std;
int main(){
	// int count=0;
	// do{
		
	// 	cin>>ch;
	// 	cin>>ch;
	// 	if (ch=="$"){
	// 		break;
	// 	}
	// 	count++;
	// }while(1);
	// cout<<count;
int count=0;
	do{
		
		char ch;
		ch=cin.get();
		if (ch=='$'){
			break;
		}
		count++;
	}while(1);
	cout<<count;

	return 0;
}