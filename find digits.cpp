#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,t,c,rem,temp;
	cin>>t;
	while(t--)
	{	
		c=0;
		cin>>n;
		temp=n;
		while(temp!=0)
		{
			rem=temp%10;
			if(rem==0)
			{	temp=temp/10;
				continue;
			}
			if(n%rem==0)
			{
				c++;
			}
			
			temp=temp/10;
		}
		cout<<c<<endl;
		
	}
	return 0;
}
