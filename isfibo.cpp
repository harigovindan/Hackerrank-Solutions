#include <stdio.h>
#include<string.h>
#define Int long long unsigned
Int convert(char *str)
{
Int val=0;int i;Int power=1;
int len=strlen(str);
for(i=len-1;i>=0;i--)
{
val+=(str[i]-48)*power;
power*=10;
}
return val;
}
int srch(Int a[],Int key)
{
int i,flag=0;
for(i=0;i<6666;i++)
{
if(a[i]==key){flag=1;break;}
}
return flag;
}
 
int main()
{
int t,i;Int num,fib[6670];
fib[0]=0,fib[1]=1;
for(i=1;i<=3333;i++)
{fib[2*i-1]=fib[i-1]*fib[i-1]+fib[i]*fib[i];
fib[2*i]=(2*fib[i-1]+fib[i])*fib[i];
}
//printf("%llu",fib[300]);
scanf("%d",&t);
while(t--)
{
char str[1010];
scanf("%s",str);
num=convert(str);
//if(bin(fib,0,6670-1,num))
if(srch(fib,num))printf("IsFibo\n");
else printf("IsNotFibo\n");
}
return 0;
} 
