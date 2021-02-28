#include <iostream>
#include <climits>

using namespace std;
int main(){
	int arr[10000];
	int n;
	cout<<"enter number of elements== ";
	cin>>n;
	for (int i=0; i<n; i++){
		arr[i]=i;
	}
	int maxsum=INT_MIN;
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			//loop to print subarrys between i and j
			int sum=0;
			for(int k=i; k<=j; k++){
				sum+=arr[k];
			}
			(sum>maxsum)?maxsum=sum:maxsum=maxsum;
		}
	}
	cout<<maxsum;
	return 0;
}