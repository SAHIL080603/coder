#include <iostream>
using namespace std;
enum planet_radius
    {sun=1372900,mercury=4879,earth=12800};

int main(){
	int n=3;
	const char *val[n]={"qq","qq","pp"};
	
	for (int i=0; i<n; i++){
		cout<<val[i]<<" ## ";
	}
	return 0;
}
