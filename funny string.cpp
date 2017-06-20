#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a;
		b=a;
		reverse(a.begin(),a.end());
		int l=a.length(),f=0;
		for(int i=1;i<l;i++)
		{
			int c=(a[i]-97)-(a[i-1]-97);
			int d=(b[i]-97)-(b[i-1]-97);
			if(c<=0)
			{
				c*=-1;
			}
			if(d<=0)
			{
				d*=-1;
			}
			if(c==d)
			{
				f=1;
				continue;
			}
			else
			{	
				f=0;
			    cout<<"Not Funny"<<endl;
				break;
			}
		}
		if(f==1)
		{
			cout<<"Funny"<<endl;
		}
	}
}
