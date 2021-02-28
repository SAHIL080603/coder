#include <iostream>
using namespace std;
int main(){
	int a=10;
	int *d=NULL;  //initialization
	// int *d;		// no initialization denotes some garbage value(absurd output) or points outside memeory allocated (gives SEGMENTATION FAULT) 
	/* use syntax:*/
	//	int *ds=NULL;	// pointer point to the 0 address memeory location(gives segmentation fault)
	//	int *ds=0;
	cout<<*d;
	return 0;
}