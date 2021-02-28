#include <iostream>
using namespace std;
int main(){
	int num=0,alpha=0,space=0,special=0;
	char ch;
	ch=cin.get();
	while(ch!='$'){
		if (ch>='0' && ch<='9'){
			num++;
		}
		else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
			alpha++;
		}
		else if(ch==' ' || ch=='\t' || ch=='\n'){
			space++;
		}
		else{
			special++;
		}
		ch=cin.get();
		
	}
	cout<<"total number=="<<num<<endl;
	cout<<"total alphabets=="<<alpha<<endl;
	cout<<"total whitespaces=="<<space<<endl;
	cout<<"total specialcharachters=="<<special<<endl;
	return 0;

}
