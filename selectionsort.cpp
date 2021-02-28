//selectionsort
#include <iostream>
using namespace std;
int main(){
	int arr []={5,3,2,1,4};
    
    int n=sizeof(arr)/sizeof(int);
    cout<<"oringinal :";
    for (int i=0;i<n;i++){
    	cout<<arr[i]<<' ';
    }
    for (int i=0;i<n;i++){
    	int mi=i;
    	for (int j=i+1;j<n;j++){
    		if (arr[j]<arr[mi]){
    			mi=j;
    		}
    	}
    	swap(arr[mi],arr[i]);
    }
        
    cout<<endl<<"sorted :";
    for (int i=0;i<n;i++){
    	cout<<arr[i]<<' ';
    }

	cout<<endl;
	return 0;
}