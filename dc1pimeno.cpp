#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	if (t<=10000){
		for (int i=1; i<=t; i++){
			int j,c=1,a;
			cin>>j;
			for (a=2; a<=1000000; a++){
				int q=0;
				for (int z=2; z<a; z++){
					if (a%z==0){
						q=1;
					}
				}
				if (q==0){
					c++;
				}
				if (c==j){
					break;
				}
			}
			cout<<a;
			
		}
	}
	return 0;
}