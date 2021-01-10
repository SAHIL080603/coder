#include <iostream>
using namespace std;
int main(){
	int n,j=-1;
	cin>>n;
	if (n==0){
		cout<<"1st fibnoicii number";
		j=1;
	}
	if (n==1){
		cout<<"2nd fibnoicii number";
		j=1;
	}
	int a=0,b=1,s=0,i=3;
	while (n>s){
		s=a+b;
		if (s==n){
			cout<<'\n'<<i<<"::position of given fibnoicii number";
		 	j=1;
		}
		else{
			a=b;
			b=s;
			i++;
		}
	}
	if (j==-1){
		cout<<"NOT a part of fibnoicii series";
	}
	return 0;
}