#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string s,p="";
        int cost=0;
        cin >> s;
        int a[26]={0};
        for(int i=0;i<s.length();i++){
            a[s[i]-97]++;
        }
        for(int i=0;i<26;i++){
            if(a[i]>0){
                cost++;
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}

