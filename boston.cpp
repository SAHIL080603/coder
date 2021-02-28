#include<iostream>
using namespace std;
int main() {
	long long int n,d=0,s=0;
	cin>>n;
	long long int n1=n;
	if (1<n<2147483647){
		while(n!=0){
		s=s+n%10;
		n=n/10;
	    }
		n=n1;
	    for (long long int i=2; i<=n; i++){
		    if (i==2 && n%i==0){
			    n=n/2;
			    d=d+2;
				cout<<'2'<<' ';
			    if (n%2==0){
				    i--;
			    }
		    }
		    else{
			    int a=-1;
			    for (long long int j=2; j<i; j++){
				    if (i%j==0){
					    a=1;
					    break;
				    }
				    else if (i%j!=0){
					    a=0;
				    }
			    }
			    if (a==0 && n%i==0){
				    cout<<i<<' ';
					n=n/i;
					long long int p=0,o=i;
	                while(i!=0){
		                p=p+i%10;
		                i=i/10;
	                }
                    d=d+p;
					i=o;
				    if (n%i==0){
					    i--;
				    }
			    }
		    }

	    }
		if(d==s){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	return 0;
}
