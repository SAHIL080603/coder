#include <iostream>
using namespace std;
int main(){
	int arr [10];
    for (int i=0;i<10;i++){
    	arr[i]=i+11;
    }
    cout<<"original array is :";
    for (int c=0;c<10;c++){
    	cout<<arr[c]<<' ';
    }
    cout<<endl<<"reverse printing of array :";
    for (int i=9;i>=0;i--){
    	cout<<arr[i]<<' ';
    }
    cout<<endl<<"reversing an array :";
    int temp=0;
    int i=0,j=9;
    while (i<j){
    	temp=arr[i];
    	arr[i]=arr[j];
    	arr[j]=temp;
    	i++;
    	j--;
    }
    cout<<"printing the reversed array :";
    for (int c=0;c<10;c++){
    	cout<<arr[c]<<' ';}

    return 0;
}
