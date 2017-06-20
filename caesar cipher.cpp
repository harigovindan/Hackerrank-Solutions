#include<iostream>

using namespace std;
int main()
{
    	int n,k;
        cin>>n;
    	string a;
    	cin>>a;
        cin>>k;
    	k%=26;
    	for(int i=0;i<a.length();i++)
    	{
    		if(a[i]>=65&&a[i]<=90)
    		{
					if(a[i]+k>90)
						{
    				a[i]=a[i]+k-26;
    					}
    				else
    					{
    				a[i]=a[i]+k;
    					}
    		}
    		if(a[i]>=97&&a[i]<=122)
    		{
    			if(a[i]+k>122)
    				{
    				a[i]=a[i]+k-26;
    				}
    			else
    				{
    				a[i]=a[i]+k;
    				}
    		}
    	}
    	cout<<a<<endl;    
}
