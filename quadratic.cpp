#include<iostream>
#include <cmath>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	if (-100<=a,b,c && a,b,c<=100){
		int r1,r2,d;
		d=(b*b-4*a*c);
		if (a>0){
			cout<<"Real and Distinct"<<endl;
			r1=((-b + sqrt(d)))/(2*a);
			r2=((-b - sqrt(d)))/(2*a);
			cout<<r2<<' '<<r1;
		}
		else if (a==0){
			cout<<"Real and Equal"<<endl;
			r1=(-b)/(2*a);
			cout<<r1<<' '<<r1;
		}
		else{
			cout<<"Imaginary";
		}
	}
	return 0;
}