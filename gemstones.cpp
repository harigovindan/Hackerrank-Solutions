#include<stdio.h>
#include <stdlib.h>
#include <string.h>
 
void cal(int N,char **s){
 
int i=0,j=0,k=0,count[26]={0},var,len,result=0,flag[26]={0};
 
for(i=0;i<N;i++)
{
len=strlen(s[i]);
 
for(j=0;j<len;j++)
{
var = (int)s[i][j];
var = var-97;
flag[var]=1;
 
}
for(k=0;k<26;k++)
{
if(flag[k]==1)
count[k]++;
flag[k]=0;
}
 
}
 
for(i=0;i<26;i++)
{
if(count[i]==N)
result++;
}
printf("%d",result);
}
 
int main()
{
int N,i;
char **s;
 
scanf("%d",&N);
s = (char**)malloc(N*sizeof(char*));
 
for(i=0;i<N;i++)
s[i]= (char*)malloc(10000*sizeof(char));
 
for(i=0;i<N;i++)
scanf("%s",s[i]);
 
cal(N,s);
 
}
