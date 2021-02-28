#include <iostream>  
using namespace std;
int main(){
	// int  n,j=0;
	// cin>>n;
	// for (int  i=1; i<=n/2; i++){
	// 	if (n/i==i){
	// 		cout<<"squareroot of given number::"<<i<<endl;
	// 		j=1;
	// 		break;
	// 	}
	// }
	// if (j==0){
	// 	cout<<"integral squareroot doestnot exist"<<endl;
	// }
	int no;
	cin>>no;
	float i=0;
	float inc=1;
	int p;
	cin>>p;
	for (int j=0; j<=p; j++){
		while(i*i<=no){
			i=i+inc;
		}
		i=i-inc;
		inc=inc/10;
	}
	cout<<i;

	return 0;
}