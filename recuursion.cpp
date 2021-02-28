#include<iostream>
using namespace std;
int main() {
        int m,n;
        int a[100000];
        int b[100000];
        int num=0,ans[100000]={0};
        cin>>m;
        for(int i=0;i<m;i++)
        {
                cin>>a[i];
        }
        cin>>n;
        for(int i=0;i<n;i++)
        {
                cin>>b[i];
        }
        if(n==1 && m==1)
        {
                cout<<a[0]+b[0]<<", END";
                return 0;
        }
         if(m<=n)
        { for(int i=0;i<=m;i++)
        {  ans[i]=a[m-i-1]+b[n-i-1]+num;
        num=ans[i]/10;
        ans[i]=ans[i]%10;
                }
                for(int i=m;i>=0;i--)
                {
                        
                        cout<<ans[i]<<", ";
                }}
            else
                {num=0;
                        for(int i=0;i<=n;i++)
                        {
                                ans[i]=b[n-i-1]+a[m-i-1]+num;
                                num=ans[i]/10;
                                ans[i]=ans[i]%10;
                        }
                        for(int i=n;i>=0;i--)
                {
                        
                        cout<<ans[i]<<", ";
                }
                }
                cout<<"END";
                return 0;
}

