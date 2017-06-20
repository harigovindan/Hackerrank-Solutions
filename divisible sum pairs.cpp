#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
        {
        for(int j=i;j<n;j++)
            {
            if(((a[i]+a[j])%k==0) && (i!=j)){
                c++;
                //cout<<i<<" "<<j<<endl;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}

