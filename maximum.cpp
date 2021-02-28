#include <iostream>
using namespace std;
int main(){
	int n=1;
	cout<<"enter amount of numbers to be inputed::";
	cin>>n;
    
	int no;
	int i=1;
	int max=-no;

	while (i<=n){
		cin>>no;
		if (no>max){
			max=no;
		}
		i++;
	}
    cout<<max;
	cout<<endl;
	return 0;
}