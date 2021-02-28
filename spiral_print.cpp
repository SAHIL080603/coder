#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int sr=0,sc=0,er=n-1,ec=m-1;
    while(sr<=er && sc<=ec){
        for(int i=sr; i<=ec; i++){
            cout<<arr[sr][i]<<" ";
        }
        sr++;
        for(int i=sr; i<=er; i++){
            cout<<arr[i][ec]<<" " ;
        }
        ec--;
        if(sr<er ){
            for(int i=ec; i>=sc; i--){
                cout<<arr[er][i]<<" ";
            }
            
        }
        er--;
        if(sc<ec){
            for(int i=er; i>=sr; i--){
                cout<<arr[i][sc]<<" ";
            }
            
        }
        sc++;
        

    }

}