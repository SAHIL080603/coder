#include <iostream>
#include <climits>
#include<cmath>
using namespace std;
int main(){
	int arr[10000];
	int n;
	cout<<"enter number of elements== ";
	cin>>n;
	for (int i=0; i<n; i++){
		arr[i]=i;
	}
	int cs=0,ms=0;
	for (int i=0; i<n; i++){
		cs+=arr[i];
		if(cs<0){
			cs=0;
		}
		ms=max(cs,ms);
	}
	cout<<ms;
	return 0;
}