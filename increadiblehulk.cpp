/*The Planet Earth is under a threat from the aliens of the outer space and the Marvel Avengers team is
 busy fighting against them. Meanwhile, The Incredible Hulk has to defeat an enemy who is N steps above 
 the level where he is standing (assume it as the 0th level). Hulk, because of his incredible jumping 
 ability can take jumps in power of 2. In order to defeat the enemy as quickly as possible he has to 
 reach the Nth step in minimum moves possible. Help Hulk to find the same and contribute in saving the Mother Earth.*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for (int i=0; i<n; i++){
		int a;
		cin>>a;
		int s=0;
		while (a!=0){
			if (a & 1){
				s++;
			}
			a=a>>1;
		}
		cout<<s<<endl;
	}
	return 0;
}