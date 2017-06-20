 #include <cmath>  
 #include <cstdio>  
 #include <vector>  
 #include <iostream>  
 #include <algorithm>  
 using namespace std;  
 int main() {  
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   unsigned long long t,b,w,x,y,z,i,j,k,costofb,costofw;  
   cin>>t;  
   while(t--){  
     cin>>b>>w;  
     cin>>x>>y>>z;  
     costofb = b*x;  
     costofw = w*y;  
     if(x==y){  
       cout<<costofb+costofw<<endl;  
     }else if(x<y){  
       if((x+z)<y){  
         cout<<((w*x)+(w*z))+costofb<<endl;  
       }else{  
         cout<<costofb+costofw<<endl;  
       }  
     }else{  
       if((y+z)<x){  
         cout<<((b*y)+(b*z))+costofw<<endl;  
       }else{  
         cout<<costofb+costofw<<endl;  
       }  
     }  
   }  
   return 0;  
 }  
