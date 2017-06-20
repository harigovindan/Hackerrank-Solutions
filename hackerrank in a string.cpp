#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b="hackerrank";
        cin>>a;
        int blen=b.length(),j=0;
        for(int i=0;i<a.length();i++)
            {
            if(a[i]==b[j]){
                j++;
            }
        }
        if(j==blen){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

