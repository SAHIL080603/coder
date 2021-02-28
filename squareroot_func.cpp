#include<bits/stdc++.h>
using namespace std;
int squareRoot(long long int A) {
        int n=0;
        if (A>=0 && A<10000000000){
                for (int i=1;i<=A;i++){
                        if (A/i==i){
                                return i;
                        }
                        else {
                                n=floor(sqrt(A));
                        }
                }
        }
        else{
                cout<<"invalid";
        }
        return n;

}
int main () {
        int A;
        cin >> A;
        cout << squareRoot(A);
	return 0;
}