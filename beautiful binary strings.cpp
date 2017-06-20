#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c=0;
	string a;
	cin>>n;
	cin>>a;
	int i=0;
	while(i<a.length()){
		if(a[i]=='0'&& a[i+1]=='1'&& a[i+2]=='0'){
			c++;
			i+=3;
		}
		else{
			i+=1;
		}
	}
	cout<<c<<endl;
}
