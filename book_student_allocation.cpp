#include <iostream>

using namespace std;
bool isvalid(int *books,int n,int students,int capacity)
{
	int s=1;
	int currentpage=0;
	for(int i=0; i<n; i++){
		if(currentpage+books[i]>capacity){
			s++;
			currentpage=books[i];
			if(s>students){
				return false;
			}
		}
		else{
			currentpage+=books[i];
		}
	}
	return true;

}
int bookallocation(int *a,int n,int students)
{
	int totalpages=0;
	int s=0,e;
	for(int i=0; i<n; i++){
		totalpages+=a[i];

	}
	s=a[n-1];
	e=totalpages;
	int finalans=0;
	while(s<=e){
		int mid=(s+e)/2;
		if(isvalid(a,n,students,mid)){
			finalans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return finalans;

}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int arr[100];
		int n,m;//n->books m->students
		cin>>n>>m;
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		int x=bookallocation(arr,n,m);
		cout<<x<<endl;
	}
	return 0;
}