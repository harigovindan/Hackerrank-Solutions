#include<bits/stdc++.h>
using namespace std;
int main(){    
    string s,t;
    cin>>s>>t;    
    int k;
    cin>>k;    
    int i=0;
    for(;i<min(s.length(),t.length());++i) {
        if(s[i]!=t[i]) {
            break;
        }
    }    
    int min_ops=(t.length()-i)+(s.length()-i);    
    int more_ops=min_ops;
    while(more_ops<k){
        if(i-->0)
            more_ops+=2;
        else
            more_ops++;
    }
    cout<<(more_ops==k?"Yes":"No")<<endl;    
    return 0;
}

