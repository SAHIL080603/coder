#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for (int i=1; i<=n; i++){
		for (int j=n; j>=n-i+1; j--){
			cout<<j<<' ';
		}
		for (int j=1; j<=2*(n-i+1)-1; j++){
			cout<<' '<<' ';
		}
		for (int j=n-i+1; j<=n; j++){
			cout<<j<<' ';
		}
		cout<<'\n';
	}
	for (int i=n; i>=1; i--){
		cout<<i<<' ';
	}
	cout<<0<<' ';
	for (int i=1; i<=n; i++){
		cout<<i<<' ';
	}
	cout<<'\n';
	for (int i=1; i<=n; i++){
		for (int j=n; j>=i; j--){
			cout<<j<<' ';
		}
		for (int j=1; j<=2*(i)-1; j++){
			cout<<' '<<' ';
		}
		for (int j=i; j<=n; j++){
			cout<<j<<' ';
		}
		cout<<'\n';
	}
	return 0;
}