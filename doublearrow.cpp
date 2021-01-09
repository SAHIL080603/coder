#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	if (n==1){
		cout<<1;
	}
	else{
		 	for (int j=1; j<=n/2; j++){
			cout<<"    ";
		}
		cout<<1<<'\n';
		for (int i=2; i<=n/2+1; i++){
			for (int j=1; j<=n/2+1-i; j++){
				cout<<"    ";
			}
			for (int j=i; j>=1; j--){
				cout<<j<<' ';
			}
			for (int j=1; j<=2*(i-1)-1; j++){
				cout<<' '<<' ';
			}
			for (int j=1; j<=i; j++){
				cout<<j<<' ';
			}
			cout<<'\n';
		}
	for (int i=1; i<=n/2-1; i++){
		for (int j=1; j<=i; j++){
			cout<<"    ";
		}
		for (int j=(n/2)-i+1; j>=1; j--){
			cout<<j<<' ';
		}
		for (int j=1; j<=2*((n/2)-i)-1; j++){
			cout<<' '<<' ';
		}
		for (int j=1; j<=(n/2)-i+1; j++){
			cout<<j<<' ';
		}
		cout<<'\n';
	}
	for (int j=1; j<=n/2; j++){
			cout<<"    ";
		}
	cout<<1;

	}
	return 0;
}