#include<iostream>
using namespace std;
int main() {
	int n=0;
	cin>>n;
	if (n>=1 && n<=10){
		n=n-2;
		for (int a=1;a<=n;a++){
			for (int i=1;i<=n-a;i++){
				cout<<"	";
			}
			for (int i=1;i<=a;i++){
				cout<<'*'<<"	";
				
			}
			for (int i=a-1;i>=1;i--){
				cout<<'*'<<"	";

				
			}
			for (int i=1;i<=n-a;i++){
				cout<<"	";
			}
			cout<<endl;

		}
	}
	return 0;
}