#include<iostream>
#include <climits>
using namespace std;
int maxsum(int arr[],int n){
	int cs=0,ms=0;
	for (int i=0; i<n; i++){
		cs+=arr[i];
		if(cs<0){
			cs=0;
		}
		ms=max(cs,ms);
	}
	return ms;
	
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,add1=0;
		cin>>n;
		int arr[1000];
		for (int i=0; i<n; i++){
			cin>>arr[i];
			add1+=arr[i];
		}
		int sum1=maxsum(arr,n);
		
		for (int i=0; i<n; i++){
			arr[i]=-arr[i];
			
		}
		int add2=add1+maxsum(arr,n);
		(sum1>add2)?cout<<sum1:cout<<add2;
		cout<<endl;
		
	}
	return 0;
}
/*In this problem, there can be two cases i.e. either the subarray having maximum sum is

obtained in a circular fashion or the subarray having maximum sum is obtained in a non-
circular fashion.

The non-circular maximum sum subarray can be obtained directly by Kadane’s Algorithm.
But the subarray with circular fashion cannot be solved by Kadane’s algorithm.
So to solve this problem we will first calculate the maximum sum subarray using Kadane’s
Algorithm and store it in a variable, say candidate1. Then we will invert the sign of every
element of the array and again apply Kadane’s Algorithm to calculate the maximum sum
subarray of this new inverted array.
But we should keep in mind the fact that the maximum sum of the inverted subarray is actually
the minimum sum subarray for the original array. So if we subtract the negative value of this
new sum from the cumulative sum of the original array we will get another candidate for the
answer and name it candidate2. Then compare both the candidates and return the larger
number.
Let us take an example and dry run our code.
For an array, say 10, -3, -4, 7, 6, 5, -4, -1
Cumulative Sum of the original array is 16
candidate1 using Kadane’s algorithm on this array is 21 i.e from index 0 to 5
Now inverting this array it becomes -10, 3, 4, -7, -6, -5, 4, 1

Now applying Kadane’s algorithm on this new array we get the sum as 7 i.e from index 1 to 2.
So candidate2 will be cumulative_sum - (-7) i.e 16+7 which is 23
So candidate2 is greater than candidate1 so answer is 23
Here we can conclude that this algorithm works because it explains the fact the array’s sum
could have been maximum if the minimum sum elements sum were not present so we should
exclude it.*/