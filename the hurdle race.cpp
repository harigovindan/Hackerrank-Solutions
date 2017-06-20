#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	if(max<k){
		cout<<"0"<<endl;
	}
	else{
		cout<<max-k<<endl;
	}
}
