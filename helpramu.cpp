//https://hack.codingblocks.com/app/contests/2049/1089/problem
#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int c1,c2,c3,c4;
		cin>>c1>>c2>>c3>>c4;
		int rn,cn;
		cin>>rn>>cn;
		int ar[rn];
		int ac[cn];
		for (int i=0; i<rn; i++){
			cin>>ar[i];
		}
		for (int i=0; i<cn; i++){
			cin>>ac[i];
		}
		int minr=0;
		for (int i=0; i<rn; i++){
			minr=minr+min(ar[i]*c1,c2);
			
		}
		int minf=min(minr,c3);
		minr=0;
		for (int i=0; i<cn; i++){
			minr=minr+min(ac[i]*c1,c2);
			
		}
		minf=minf+min(minr,c3);
		int minimum=min(minf,c4);
		cout<<minimum<<endl;
		
	}
	return 0;
}