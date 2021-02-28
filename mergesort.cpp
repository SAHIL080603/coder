#include <iostream>
using namespace std;
#define lli long long int


void mergetwosortedarrays(lli *arr,lli s,lli e){
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	lli *temp=new lli[2000000];
	int k=s;
	while(i<=mid && j<=e){
		if(arr[i]<arr[j]){
			temp[k++]=arr[i++];
			//k++;
			//i++;
		}
		else{
			temp[k]=arr[j];
			k++;
			j++;
		}
	}
	while(i<=mid){
		temp[k++]=arr[i++];
	}
	while(j<=e){
		temp[k++]=arr[j++];
	}
	for(lli i=s; i<=e; i++){
		arr[i]=temp[i];
	}
	// cout<<endl;
}


void mergesort(lli *arr, lli s, lli e){
	if(s>=e){
		return;
	}
	int mid =(s+e)/2;
	mergesort(arr,s,mid);  //first half 1 2 4
	mergesort(arr,mid+1,e);//second half 3 5
	mergetwosortedarrays(arr,s,e);
}
int main(){
	int n;
	cin>>n;
	lli *arr=new lli[2000000]; //dynamic allocation of a array
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	mergesort(arr, 0, n-1);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
		/* code */
	}
	delete []arr; //deletion of array from memory
	// needed to be deleted because it takes space in the
	//memory so its deletion is required as it exist even after end of program
	return 0;
}