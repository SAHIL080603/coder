#include <iostream>
using namespace std;
void update(int x){ //call by value
	x++;
	cout<<"value of a 2 is"<<x<<endl;

}
void update1(int &x){ //call by refrences
	x++;
	cout<<"value of a 2 is"<<x<<endl;

}
int main(){
	int a=10;
	cout<<"value of a 1 is"<<a<<endl;
	update(a); //update
	cout<<"value of a 2 is"<<a<<endl;
	return 0;
}
/* syntax of naming a refrence
	
	int x=50;
	int &y=x;		//multiple refrences is allowed
	int &z=y;		//can be compared with nicknames of a preson
if====
	y=10; then x=z=10 //changes made to one refrence gets reflected to all other refrences and official varable name

*/
