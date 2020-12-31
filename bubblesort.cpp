//bubblesort
#include <iostream>
using namespace std;
int main(){
	int arr []={5,3,2,4,1,-1,2,33,90,10,6};
    
    int n=sizeof(arr)/sizeof(int);
    cout<<"oringinal :";
    for (int i=0;i<n;i++){
    	cout<<arr[i]<<' ';
    }
    
    for (int i=0; i<=n-2 ;i++){
    	int cnt=0;
    	for (int j=0; j<=n-2-i; j++){
    		if (arr[j]>arr[j+1]){
    		    cnt++;
    		    swap(arr[j],arr[j+1]);
    		}
    	}
    }
    cout<<endl<<"sorted :";
    for (int i=0;i<n;i++){
    	cout<<arr[i]<<' ';
    }

	cout<<endl;
	return 0;
}