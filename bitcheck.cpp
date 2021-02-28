//bitcheck
#include <iostream>
using namespace std;
int main(){
    int no,set=0;
    cin>>no;  // no=10
    while (no!=0){
    	if ((no&1)==1){
    		set++;
    	}
    	no=no>>1;
    
    }
    cout<<"set bits   "<<set;
    

	cout<<endl;
	return 0;
}