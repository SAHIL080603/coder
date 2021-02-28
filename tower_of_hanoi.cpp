#include <bits/stdc++.h>
using namespace std;
void toh(int n, char src,char helper,char dst){
	if(n==0){
		return;
	}


	//recursive case
	toh(n-1,src,dst,helper);
	cout<<"take "<<n<<" disk form "<<src<<" to "<<dst<<endl;
	toh(n-1,helper,src,dst);
}
int main(){
	int n;
	cin>>n;
	toh(n,'A','B','C');
	return 0;
}