#include <iostream>
using namespace std;
int main()
{
	//initialisation
	char arr[]={'A','b','c','D','\0'}; //'\0'==char array reads untill it encounters a garbage value('\0')
	char arr1[4]={'A','B','D','c'};
	char arr2[]="ABCD";
	cout<<arr<<endl;
	cout<<arr2<<endl;
	//another way
	char arr3[100];
	cin>>arr3;
	cout<<arr3<<endl;
	//using cin.get()
	char arr4[100];
	int i=0;
	char ch;
	ch=cin.get(); //1 value at one time and returns it
	while(ch!='$'){ // '\n' is a deafult delimiter
		arr4[i]=ch;
		i++;
		ch=cin.get();
		arr4[i]='\0';
	}
	cout<<arr4<<endl;
	//shoter way to do above 
	char arr5[100];
	cin.getline(arr5,100); //paragraph
	cout<<arr5<<endl;
	//another way of printng the array
	for(int i=0; arr5[i]!='\0';i++){
		cout<<arr5[i];
	}
	cout<<endl;
	char arr6[100];
	cin.getline(arr6,100,'$'); //paragraph
	cout<<arr6<<endl;

	//if given a string of size n-1 initialize the array with n size as at the last index there is NULL('\0')

	return 0;
}