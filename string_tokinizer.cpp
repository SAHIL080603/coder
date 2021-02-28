#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char arr[]="1234....%$'''56$736...$4423";
	char *ptr=strtok(arr,".4%$'");
	while(ptr!=NULL){
		cout<<ptr<<endl;
		ptr=strtok(NULL, ".4$%'");
	}
	// cout<<ptr<<endl;

	// ptr=strtok(NULL, ".$%'");
	// cout<<ptr<<endl;

	// ptr=strtok(NULL, ".$%'");
	// cout<<ptr<<endl;

	// ptr=strtok(NULL, ".$%'");
	// cout<<ptr<<endl;



	
}