#include<iostream>
#include<string>
using namespace std;

void per(string str,string out)
{
	//base case
	if(str.length()==0)
	{
		out=out+"\0";
		cout<<out<<endl;
		return;
	}

	//recursive case
	for(int i=0; i<str.length(); i++){
		string small=str.substr(0,i)+str.substr(i+1);
		
		per(small,out+str[i]);
	}
}
using namespace std;
int main() {
	string str;
	cin>>str;
	
	per(str,"\0");
	return 0;
}