//binarysearch
#include<iostream>
using namespace std;
int main() {
    
    int s=0,key=0,ans=-1;
    int arr[]={1,3,4,5,9};
    int e=sizeof(arr)/sizeof(int);
    for (int i=0;i<e;i++){
    	cout<<arr[i]<<' ';
    }
    cout<<"enter::";
    cin>>key;
    while(s<=e){
    	int mid=(s+e)/2;
    	if (arr[mid]==key){
    		ans=mid;
    		break;
    	}
    	else if (arr[mid]>key){
    		e=mid;
    	}
    	else{
    		s=mid;
    	}
    }
    if (ans==-1){
    	cout<<"not found";
    }
    else{
    	cout<<"found at ::"<<ans;
    }
	return 0;
}