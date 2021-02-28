#include<iostream>
#include <cmath>
using namespace std;
int main(){
	int a=10,q=1,e,n=0;
	q=pow(a,8);
	cin>>n;
    cout<<endl;
    if (n>0){
    	int arr[n];
    	for (int i=0;i<n;i++){
            cin>>e;
            cout<<endl;
    		if (e>-q-1&& e<q+1){
    			arr[i]=e;
    		}
    		else{cout<<"invlaid input";}
    	}
		for (int i=0;i<n;i++){
			int m=i;
			for (int j=i+1;j<n;j++){
				if (arr[j]<arr[m]){
					m=j;
				}
			swap(arr[m],arr[j]);
			}

		}
	    for (int i=0;i<n;i++){
			cout<<arr[i];
		}
	else{cout<<"invalid input";}
	
	return 0;
}