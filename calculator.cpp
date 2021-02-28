#include<iostream>
using namespace std;
int main() {
	int i=1;
	while(i>0){
		char s;
		cin>>s;
		if (s=='+'){
			int a,b;
			cin>>a>>b;
			if(0 <= a,b <= 100000000){
				cout<<a+b<<endl;
			}
		}
		else if (s=='-'){
			int a,b;
			cin>>a>>b;
			if(0 <= a,b <= 100000000){
				cout<<a-b<<endl;
			}
		}
		else if (s=='*'){
			int a,b;
			cin>>a>>b;
			if(0 <= a,b <= 100000000){
				cout<<a*b<<endl;
			}
		}
		else if (s=='/'){
			int a,b;
			cin>>a>>b;
			if(0 <= a,b <= 100000000){
				cout<<a/b<<endl;
			}
		}
		else if (s=='%'){
			int a,b;
			cin>>a>>b;
			if(0 <= a,b <= 100000000){
				cout<<a%b<<endl;
			}
		}
		else if (s=='X' || s=='x'){
			break;
		}
		else{
			cout<<"Invalid operation. Try again."<<endl;
		}
	}
	return 0;
}