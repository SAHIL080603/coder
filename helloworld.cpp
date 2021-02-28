#include<iostream>
using namespace std;
int main () {
	int h[]={0,0,2,0,3,4,6,5,7,7,7,4,5,9};
	int a=h[0],c=1;
	for(int i=1; i<sizeof(h)/sizeof(int); i++){
		if (h[i]>a){
			c++;
			a=h[i];
		}
		else if (h[i]<a){
			for (int j=i+1;i<sizeof(h)/sizeof(int); i++){
				if (h[i]>a){
			        c++;
			        a=h[i];
		        }
			}
		}
	}
	cout<<c;
	return 0;
}