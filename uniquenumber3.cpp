#include<iostream>
using namespace std;
int main() {
	//unique number 3
	int n;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++){
		
		cin>>a[i];
	}
	//frequency
	int c[32]={0};
	for (int i=0; i<n; i++){
		//visit each element
		//and get the position of set bits and add it to ferquency arry
		int temp=a[i];
		int position=0;
		while (temp>0){
			if (temp & 1){
				c[position]++;
			}
			position++;
			temp=temp>>1;

		}
	}
	//now for the number ,work on frequency(c) array
	int number=0,f=1;
	for (int i=0; i<32; i++){
		c[i]=c[i]%3;
		number=number+c[i]* f;
		f=f<<1;
	}
	cout<<number;
	


	return 0;
}