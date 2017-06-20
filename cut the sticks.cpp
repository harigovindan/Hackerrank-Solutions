#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	
		int n;
		cin>>n;
		int a[n],b[n],c[n];
		for(int i=0;i<n;i++)
		{			
			cin>>a[i];
			b[i]=a[i];			
		}
		int size=n,f=0;
			sort(b,b+size);
			int min=b[0];
			cout<<size<<endl;		
	while(size>0)
	{
	n=size;
	int j=0,c[n],q,res=0;	
	for(int i=0;i<n;i++)
	{
		if(a[i]-min!=0)
		{
		res++;
		c[j++]=a[i]-min;
		}
	}
	if(res!=0)
	{
	cout<<res;
	}
	size=j;
	int k=0;
	for(int i=0;i<size;i++)
	{
		a[k++]=c[i];
	}
	sort(c,c+size);
	min=c[0];
	if(size!=0)
	{cout<<endl;}	
	}
	}
