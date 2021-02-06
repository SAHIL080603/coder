#include<iostream>
#define ll long long
using namespace std;
int dsum(int n1){
	int d=0; while(n1!=0){ll int a=n1%10;d+=a;n1/=10;} return d;
}
int prime(int i){
	for (int j=2; j*j<=i; j++){ if (i%j==0){ return 0; } }return 1;
}
int main() {
	ll int n=0,d=0;
	cin>>n;
	ll int n1=n;
	d=dsum(n1);
	n1=n;
	ll int pri=0;
	
	for(ll int i=2; i<=n; i++){
		int flag=prime(i);
		if(flag==1 && n1%i==0){
			int p=dsum(i);
			int a=0;
			while(n1%i==0){
				n1/=i;
				a=a+p;
			}
			pri+=a;
		}
		if(n1==1){
			break;
		}
	}
	
	(pri==d)?cout<<1:cout<<0;
	return 0;
}