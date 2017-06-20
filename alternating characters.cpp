#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int t,c;
	cin>>t;
	while(t--)
	{	c=0;
		cin>>a;
		int n=a.length();
		for(int i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
			{
				c++;
			}	
		}
		cout<<c<<endl;
	}
	return 0;
}
