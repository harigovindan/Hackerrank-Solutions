#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int t,f,len,len1;
	cin>>t;
	string a,b;
	while(t--)
	{
		cin>>a;
		cin>>b;
		len=0;len1=0,f=0;
		int aa[26]={0},bb[26]={0};
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		a.erase(unique(a.begin(),a.end()),a.end());
		b.erase(unique(b.begin(),b.end()),b.end());
		len=a.length();
		len1=b.length();
		for(int i=0;i<len;i++)
		{
			aa[a[i]-'a']=1;
		}
		aa[10]=0;
		for(int i=0;i<len1;i++)
		{
			bb[b[i]-'a']=1;
		}
		bb[10]=0;
		for(int i=0;i<26;i++)
		{
			if((aa[i]==1)&&(bb[i]==1))
			{
				cout<<"YES"<<endl;
				f=1;break;
			}
		}
		if(f==0)
		{
			cout<<"NO"<<endl;
		}
		
	}
	
	return 0;
}
