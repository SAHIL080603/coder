#include <iostream>
using namespace std;
int main(){
	int a=5,b=7;
	int i=a&b;
	cout<<"bitwize AND::"<<i<<endl;
	i=a|b;
	cout<<"bitwize OR::"<<i<<endl;
	i=a^b;
	cout<<"bitwize XOR::"<<i<<endl;
	i=0^233;
	cout<<"bitwize XOR return 0^any number=number itself::"<<i<<endl;
	i=a<<b;
	cout<<"bitwize left shift num*2^no.of shift::num="<<a<<"(here)::"<<i<<endl;
	i=a>>b;
	cout<<"bitwize right shift num/2^no.of shift::num="<<a<<"(here)::"<<i<<endl;

	return 0;
}
