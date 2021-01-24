#include<iostream>
#include <cmath>
using namespace std;
int convert(int sb,int db,long long int sn){
	int r1=0,i=0;
	
	while (sn!=0){
		int a=sn%10;
		r1=r1+a*pow(sb,i);
		i++;
		sn=sn/10;
	}
	
	if(db==10){
		return r1;
	}
	else{
		long long int r2=r1,i=0;
		while(r1>0){
			int a=r1%db;
			i++;
			r1=r1/db;
		}
		long long int arr[i-1]={0};
		long long int r=i;
		r1=r2;
		r2=0;
		while(r1>0){
			int a=r1%db;
			arr[i-1]=a;
			i--;
			r1=r1/db;
		}

		for (int j=0; j<r; j++){
			r2=r2*10+arr[j];
		}
		return r2;
	}
}
int main() {
	int sb,db;
	long long int sn;
	cin>>sb>>db>>sn;
	
	cout<<convert(sb,db,sn);

	return 0;
}