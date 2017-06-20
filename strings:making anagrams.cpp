#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    int c[26]={0};
    for(int i=0;i<a.length();i++)
        {
        c[a[i]-97] += 1;
    }
    for(int i=0;i<b.length();i++)
        {
        c[b[i]-97] -= 1;
    }
    int count=0;
    for(int i=0;i<26;i++)
    {
    	count+=abs(c[i]);
	}
	cout<<count;
    return 0;
}


