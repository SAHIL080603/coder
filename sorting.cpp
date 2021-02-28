#include <iostream>
using namespace std;
int main(){
	int a[7]={2,4,8};
	int b[4]={0,1,5,7};
	int i=2,j=3,k=7;
	while (k>0){
		if (a[i]>=b[j]){
			a[k]=a[i];
			i--;
			k--;
		
		}
		else{
			a[k]=a[j];
			j--;
			k--;
		}

	}

	return 0;
}