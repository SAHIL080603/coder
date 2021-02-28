#include <iostream>
using namespace std;
int main(){
    int n,no;
    cin>>n; //n will be odd , and every number wil occur twice
               //ecept for one nmber
    int ans=0;
    for (int i=0; i<n;i++){
    	cin>>no;
    	ans=ans^no;
    }
    cout<<"unique   "<<ans;

	cout<<endl;
	return 0;
}