#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
        cin>>n;
        string ks1;
        for(int j=n;j>=0;j--)
        {
            if(j%3==0 && (n-j)%5==0)
            {
                ks1="";
                for(int k=0;k<j;k++)
                    ks1+='5';
                for(int k=0;k<n-j;k++)
                    ks1+='3';
                break;
            }
        }
        if(ks1=="")
            cout<<"-1"<<endl;
        else
            cout<<ks1<<endl;
    }
    return 0;
}
