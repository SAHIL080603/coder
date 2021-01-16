#include<iostream>
using namespace std;
int main() {
	int n;
	//unquie number 2
	//step=1: first get the XOR of all elements
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	int  xorr=0;
	for (int i=0; i<n; i++){
		xorr=xorr^arr[i];
	}
	//xor =2^3
	//step 2:to find the right most setbit;
	int position=0,temp=xorr;   //to find the setbit
	while (temp>0){
		if (temp & 1){
			break;
		}
		else {
			position++;
			temp=temp>>1;
		}
	}
	//step 3 :to make mask
	int mask=1<<position,num1=0;//find the fist number
	for (int i=0; i<n; i++){
		if (mask & arr[i]){
			num1=num1^arr[i];
		}
	}
	int num2=xorr^num1;// calculate the another number
	if (num1>num2){
		cout<<num2<<' '<<num1;
	}
	else{
		cout<<num1<<' '<<num2;
	}
	return 0;
}