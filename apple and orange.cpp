#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,t,a,b,m,n,apple=0,orange=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int aq[m],bq[n];
    for(int i=0;i<m;i++)
        {
        cin>>aq[i];
    }
    for(int i=0;i<n;i++)
        {
        cin>>bq[i];
    }
    for(int i=0;i<m;i++)
        {
        if(((a+aq[i])>=s)&&((a+aq[i])<=t)){apple++;}
    }
    for(int i=0;i<n;i++)
        {
        if(((b+bq[i])>=s)&&((b+bq[i])<=t)){orange++;}
    }
    cout<<apple<<endl<<orange;
    return 0;
}

