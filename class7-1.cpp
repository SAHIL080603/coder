//class7-1
#include <iostream>
using namespace std;
int main()
{
	int init,fval,step;
	cout<<"give initial value:";
	cin>>init;
	cout<<endl<<"give final value:";
	cin>>fval;
    cout<<endl<<"give step value:";
	cin>>step;
	for (int farehn=init; farehn<=fval; farehn=farehn+step){
		int c=(5.0/9)*(farehn-32);/*or you can use
		                              int c=5*(farehn-32)/9*/
		cout<<farehn<<' '<<c<<endl;
	}

	cout<<endl; 
	return 0;
}