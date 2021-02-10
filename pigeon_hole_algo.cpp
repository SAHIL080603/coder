#include <iostream>
using namespace std;
#define size 1000005
# define ll long long int
ll a[size],p[size]={0};
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		// for(int i=0; i<n; i++){
		// 	cin>>a[i];
		// }
		for(int i=0; i<size; i++){
			p[i]=0;
		}
		ll sum=0;
		p[0]=1;
		for(int i=0; i<n; i++){
			cin>>a[i];
			sum+=a[i];
			sum=sum%n; 
			sum=(sum+n)&n;
			p[sum]++;
		}
		ll ans=0;
		for(int i=0; i<n; i++){
			ll no=p[i];
			ans+=no*(no-1)/2;
		}
		cout<<ans<<endl;

	}
	return 0;
}