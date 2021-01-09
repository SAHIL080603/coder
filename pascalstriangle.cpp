#include<iostream>
using namespace std;
int main() {
	int row;
	cin>>row;
	for (int n=0; n<=row-1; n++){
		for (int s=1; s<=(2*row-2)-2*(n-1); s++){
			cout<<' ';
		}
		
		if (n==0){
			cout<<"  "<<1;
		}
		else{
			for (int r=0; r<=n; r++){
				int fn=1, frn=1, fr=1;
			for (int i=1; i<=n; i++){
				fn=fn*i;
			}
			for (int i=1; i<=n-r; i++){
				frn=frn*i;
			}
			for (int i=1; i<=r; i++){
				fr=fr*i;
			}
			cout<<"  "<<fn/(frn*fr);
			cout<<' ';
			
		}
		}
		cout<<'\n';
	}
	return 0;
}