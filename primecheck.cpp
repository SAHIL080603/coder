#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for (int i=2; i<=n-1; i++){
		if (n%i==0){
			cout<<"NOT PRIME";
			return 0;
		}
	}
	// int i=2;
	// while (i<=n-1){
	// 	if (n%i==0){
	// 		cout<<"NOT PRIME";
	// 		return 0;
	// 	}
	// 	i++;
	// }
	cout<<"PRIME";
	return 0;
}