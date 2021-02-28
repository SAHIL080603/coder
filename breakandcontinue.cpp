#include <iostream>  
using namespace std;
int main(){
	//break
	for(int i=0; i<=10; i++){

		if (i==4){
			break;   /*execution of break terminates the 
					inner loop*/
		}
		cout<<"value ::"<<i<<endl;
	}
	//control comes here after break
	cout<<endl;
	for(int i=0; i<=10; i++){ /*conitnue ignores the lower statement
							  and comes to i++*/

		if ( i==5){
			continue;  
		}
		cout<<"value ::"<<i<<endl;
	}

	return 0;
}	

