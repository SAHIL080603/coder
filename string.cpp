#include<iostream>
using namespace std;
int main() {
	int N=0,M=0,num=0;
	int ans[10000]={0};
	int arr1[10000];
	int arr2[10000];
	cin>>N;
	for (int i=0;i<N;i++){
		cin>>arr1[i];
	}
	cin>>M;
	for (int i=0;i<M;i++){
		cin>>arr2[i];}
	if (N==1 && M==1){
		ans[0]=arr1[0]+arr2[0];
		cout<<ans[0]<<" ,";
	}
	if(N<=M){
		for (int i=0;i<=N;i++){
			ans[i]=arr1[N-i-1]+arr2[M-i-1]+num;
			num=ans[i]/10;
			ans[i]=ans[i]%10;}
		for (int i=0;i<=N;i++){
			cout<<ans[0]<<" ,";
		}
		}
	else{
		for (int i=0;i<=M;i++){
			ans[i]=arr1[N-i-1]+arr2[M-i-1]+num;
			num=ans[i]/10;
			ans[i]=ans[i]%10;
		}
		for (int i=0;i<=N;i++){
			cout<<ans[0]<<" ,";
		}

	}
	cout<<"END";

	return 0;
	
}