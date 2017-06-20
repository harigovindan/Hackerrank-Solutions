#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int s,a,b;
    cin>>s>>a>>b;
    int arr1[a],arr2[b];
    for(ll i=0;i<a;i++){
        cin>>arr1[i];
    }
    for(ll i=0;i<b;i++){
        cin>>arr2[i];
    }
    ll max=0;
    for(ll i=0;i<a;i++)
    {
    	for(ll j=0;j<b;j++){
    		if(arr1[i] + arr2[j] <=s){
    				if(arr1[i]+arr2[j] > max)	
    				{
    					max=arr1[i]+arr2[j];
					}
			}
		}
	}
	if(max==0){
		cout<<"-1"<<endl;
	}
	else{
		cout<<max<<endl;
	}
}
