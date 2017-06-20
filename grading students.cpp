#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
        {
        	if(a[i]>=38){
        					if((a[i]%5)==3)
								{
									a[i]=a[i]+2;
								}
        					if((a[i]%5)==4)
								{
									a[i]=a[i]+1;}
    							}
    	}
    	for(int i=0;i<n;i++)
    	{
    		cout<<a[i]<<endl;
		}
    return 0;
}

