#include<iostream>  
 using namespace std;  
 int main(){  
   int n,i,j;  
   cin>>n;  
   string inp[n];  
   for(i=0;i<n;i++)  
   {  
     cin>>inp[i];    
   }  
   for(i=0;i<n;i++)  
   {  
     for(j=0;j<n;j++)  
     {  
       if(i == 0 || j == 0 || i == n-1 || j == n-1 )  
       {  
         cout<<inp[i][j];  
       }  
       else if(inp[i][j] > inp[i][j-1] && inp[i][j] > inp[i][j+1] && inp[i][j] >inp[i-1][j] && inp[i][j] > inp[i+1][j])  
       {  
         cout<<"X" ;    
       }  
       else  
       {  
         cout<<inp[i][j];  
       }  
     }  
     cout<<endl;  
   }  
   return 0;  
 }  
