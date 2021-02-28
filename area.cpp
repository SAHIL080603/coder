#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
	long int r,c1;
	long double c,p,ans;
	cin>>r;
	c=(4.0/3)*100;
	c1=c;
	c=(c1/100.0);
	cout<<c<<endl;
	p=c*3.14*100;
	c1=p;
	p=c1/100.0;
	c1=pow(r,3);
	ans=p*c1;
	cout<<ans;
	return 0;
}