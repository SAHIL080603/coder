#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	if(n%2!=0){
		for (int i=1; i<=n; i++){
			if (i==1){
				cout<<'*';
				for (int j=1; j<=n/2-1; j++){
					cout<<' ';
				}
				for (int j=1; j<=(n/2)+1; j++){
					cout<<'*';
				}
				cout<<endl;
			}
			else if(1<i && i<n/2+1){
				cout<<'*';
				for (int j=1; j<=n/2-1; j++){
					cout<<' ';
				}
				cout<<'*'<<'\n';
			}
			else if(i==n/2+1){
				for (int j=1; j<=n; j++){
					cout<<'*';
				}
				cout<<endl;
			}
			else if (n/2+1<i && i<n){
				for (int j=1; j<=n/2; j++){
					cout<<' ';
				}
				cout<<'*';
				for (int j=1; j<=n/2-1; j++){
					cout<<' ';
				}
				cout<<'*'<<'\n';
			}
			else {
				
				for (int j=1; j<=(n/2)+1; j++){
					cout<<'*';
				}
				for (int j=1; j<=n/2-1; j++){
					cout<<' ';
				}
				cout<<'*';
				cout<<endl;
			}
		}
	}
	return 0;
}