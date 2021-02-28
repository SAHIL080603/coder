#include<iostream>
#include <cmath>
using namespace std;
int main () {
	int x1,x2,y1,y2,c;
	float a,b;
	cin>>x1;
	if (-100<x1<100){
		cin>>x2;
	}
	cin>>y1;
	if (-100<y1<100){
		cin>>y2;
	}
	if(-100<y1<y2<100){
		a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		c=a*100;
		a=c/100.0;
        cout<<a;
	}
	return 0;
}